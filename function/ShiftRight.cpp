#include <iostream>
using namespace std;
void shiftArr(int arr[], int n, int sh)
{
    for (size_t i = n - sh; i < n; i++) // shift last element and print it
    {
        cout << arr[i] << " ";
    }
    for (size_t i = 0; i < n - sh; i++) // shift elemnts after print the last element then print it
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size, shift;
    cin >> size >> shift;
    int *arr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    shift %= size;
    shiftArr(arr, size, shift);
}