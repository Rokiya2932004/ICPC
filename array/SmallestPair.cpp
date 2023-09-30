#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int  sum = 0,flag = 1, min, size;
        cin >> size;
        int *arr = new int[size];
        for (size_t i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (size_t j = 1; j <= size; j++)
        {
            for (size_t x = j + 1; x <= size; x++) // to calc the element at index 0 with 1
            {
                sum = (arr[j - 1] + arr[x - 1]) + (x - j); // (j-1) to start from index 0
                if (flag == 0 && min > sum)
                {
                    min = sum;
                }
                if (flag)
                {
                    min = sum;
                    flag = 0;
                }
                sum = 0; // to make sum =0 when calc the element at index 0 with 2
            }
        }
        cout << min << endl;
    }
}