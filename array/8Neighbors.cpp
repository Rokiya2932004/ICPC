#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    char arr[101][101]; // because i will shift the index (0,0) and start from (1,1) according to (1≤X≤N,1≤Y≤M).

    for (size_t i = 1; i <= row; i++)
    {
        for (size_t j = 1; j <= col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int INrow, INcol;
    cin >> INrow >> INcol;
    //     left side                       right side                  upper side                  lower side           upper left side                    upper right side                 down left side                   down right side
    if (arr[INrow][INcol - 1] != '.' && arr[INrow][INcol + 1] != '.' && arr[INrow - 1][INcol] != '.' && arr[INrow + 1][INcol] != '.' && arr[INrow - 1][INcol - 1] != '.' && arr[INrow - 1][INcol + 1] != '.' && arr[INrow + 1][INcol - 1] != '.' && arr[INrow + 1][INcol + 1] != '.')
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}