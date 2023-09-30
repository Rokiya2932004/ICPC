#include <iostream>
using namespace std;
int main()
{
    int size, c = 0;
    cin >> size;
    int *array = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int num;
    cin >> num;
    for (size_t i = 0; i < size; i++)
    {
        if (num == array[i])
        {
            cout << i;
            c++;
            break;
        }
    }
    if (c == 0)
    {
        cout << -1;
    }
}