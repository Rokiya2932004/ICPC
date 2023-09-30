#include <iostream>
#include <map>
using namespace std;
int main()
{
    int size, num;
    cin >> size >> num;
    int *arr = new int[size];
    map<int, int> fm;
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (size_t i = 0; i < size; i++)
    {
        fm[arr[i]]++;
    }
    for (size_t i = 1; i <= num; i++)
    {
        cout << fm[i] << endl;
    }
    delete[] arr;
}