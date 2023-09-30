#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size, res = 0;
    cin >> size;
    int *arr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    /*Check if arr is even or not*/
    for (size_t i = 0; i < size; i++)
    {
        int c = 0;
        if (arr[i] % 2 != 0)
        {
            cout << 0 << endl;
            return 0;
        }
        while (arr[i] % 2 == 0)
        {
            c++;
            arr[i] /= 2;
        }
        if (i == 0 || c < res)
        {
            res = c;
        }
    }
    cout << res << endl;
}