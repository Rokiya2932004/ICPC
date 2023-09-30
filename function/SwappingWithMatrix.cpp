#include <iostream>
#include <algorithm>
using namespace std;
// swaping rows
void rows(int matrix[], int size, int x, int y)
{ // x => at first time row then column and y also
    for (size_t i = 0; i < size; i++)
    {
        swap(matrix[(x - 1) * size + i], matrix[(y - 1) * size + i]);
    }
}
// swaping columns
void columns(int matrix[], int size, int x, int y)
{
    for (size_t j = 0; j < size; j++)
    {
        swap(matrix[j * size + (x - 1)], matrix[j * size + (y - 1)]);
    }
}
int main()
{
    int size, x, y;
    cin >> size >> x >> y;
    int *matrix = new int[size * size];
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            cin >> matrix[i * size + j];
        }
    }
    rows(matrix, size, x, y);
    columns(matrix, size, x, y);
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            cout << matrix[i * size + j]<< " ";
        }
        cout << endl;
    }
}