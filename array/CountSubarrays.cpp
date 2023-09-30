#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        int *arr = new int[size];
        for (size_t i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        long long c = 1; // becouse i started from index 1
        long long sup = 0;
        for (size_t i = 1; i < size; i++) // i will start comparing from index 1 and index before
        {
            if (arr[i] >= arr[i - 1]) // 1  4   2   3 to compaire between 4 & 1 
            {
                c++;
            }
            else
            {
                sup += (c * (c + 1)) / 2;
                c = 1;
            }
        }
        sup += (c * (c + 1)) / 2;

        cout << sup << endl;
    }
}

/*#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size;
        cin >> size;
        int subarr = (size * (size + 1)) / 2;
        int *arr = new int[size];
        long long c = 0;
        for (size_t i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (size_t i = 0; i < size - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
            {
                c++;
            }
            else
            {
                subarr -= (c * (c + 1)) / 2;
                c = 0;
            }
        }
        subarr -= (c * (c + 1)) / 2;

        cout << c << "    " <<subarr<< endl;
    }
}*/