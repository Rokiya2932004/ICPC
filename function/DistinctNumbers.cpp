#include <iostream>
#include <algorithm>
using namespace std;
void num(int n, int arr[])
{
    int c = 0;
    sort(arr,arr+n);
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            c++;
        }
    }
    cout << c;
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
    num(size, arr);
}