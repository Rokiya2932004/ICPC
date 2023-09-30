#include <iostream>
#include <algorithm>
using namespace std;
void zeros(int n, int arr[])
{
    int notZero = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[notZero] = arr[i];
            notZero++;
        }
    }
    for (size_t i = notZero; i < n; i++)
    {
        arr[i] = 0;
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    zeros(size, arr);
}