#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int size, rows, col;
    cin >> size;
    rows = size;
    col = size;
    int **arr = new int *[rows];
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = new int[col];
        for (size_t j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sumOfmain = 0;
    for (size_t i = 0; i < size; i++)
    {
        sumOfmain += arr[i][i];
    }
    int sumOFsecond = 0;
    for (size_t i = 0; i < size; i++)
    {
        sumOFsecond += arr[i][size - 1 - i];
    }
    cout << abs(sumOfmain - sumOFsecond) << endl;
    for (size_t i = 0; i < size; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}