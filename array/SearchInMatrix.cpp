#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int **arr = new int *[row]; // create array 2D
    for (size_t i = 0; i < row; i++)
    {
        arr[i] = new int[col];
        for (size_t j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int n;
    cin >> n;
    bool found = false;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            if (n == arr[i][j])
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }
    if (found)
    {
        cout << "will not take number" << endl;
    }
    else
    {
        cout << "will take number" << endl;
    }
    /*Free the dynamically allocated memory*/
    for (size_t i = 0; i < row; i++){
        delete[] arr[i];
    }
    delete [] arr;
    
}