#include <iostream>
using namespace std;
void add(int a[], int b[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i];
        if (i < n - 1)
        {
            cout << " ";
        }
    }
}
int main()
{
    int size;
    cin >> size;
    int *array = new int[size];
    int *arr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    add(array, arr, size);
}
