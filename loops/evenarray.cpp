#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = 0; j < n - i - 1; j++) // to calc the num of elements i will compaire
        {
            if (arr[j + 1] % 2 == 0 && arr[j] % 2 != 0)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}