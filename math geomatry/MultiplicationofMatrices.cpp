#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int **m1 = new int *[r];
    for (size_t i = 0; i < r; i++)
    {
        m1[i] = new int[c];
        for (size_t j = 0; j < c; j++)
        {
            cin >> m1[i][j];
        }
    }
    int r2, c2;
    cin >> r2 >> c2;
    int **m2 = new int *[r2];
    for (size_t i = 0; i < r2; i++)
    {
        m2[i] = new int[c2];
        for (size_t j = 0; j < c2; j++)
        {
            cin >> m2[i][j];
        }
    }
    int **m3 = new int *[r];
    for (size_t i = 0; i < r; i++)
    {
        m3[i] = new int[c2];
    }
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c2; j++)
        {
            m3[i][j] = 0;
            for (size_t x = 0; x < c; x++)
            {
                m3[i][j] += m1[i][x] * m2[x][j];
            }
        }
    }
    // for (size_t l = 0; l < r; l++)
    // {
    //     for (size_t m = 0; m < c2; m++)
    //     {
    //         m3[l][m] = 0;
    //     }
    // }

    // for (size_t i = 0; i < r; i++)
    // {
    //     for (size_t j = 0; j < c2; j++)
    //     {
    //         for (size_t x = 0; x < c; x++)
    //         {
    //             m3[i][j] += m1[i][x] * m2[x][j];
    //         }
    //     }
    // }
    for (size_t l = 0; l < r; l++)
    {
        for (size_t m = 0; m < c2; m++)
        {
            cout << m3[l][m] << " ";
        }
        cout << endl;
    }
}