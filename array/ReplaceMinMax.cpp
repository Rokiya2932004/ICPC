#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size, minIndex = 0, maxIndex = 0, z;
    cin >> size;
    int *arr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    z = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = z;

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}