#include <iostream>
using namespace std;
int main()
{
    int sizearr, sizeSup;
    cin >> sizearr >> sizeSup;
    int *arr = new int[sizearr];
    int *Suparr = new int[sizeSup];
    for (size_t i = 0; i < sizearr; i++)
    {
        cin >> arr[i];
    }
    for (size_t j = 0; j < sizeSup; j++)
    {
        cin >> Suparr[j];
    }
    int count = 0;
    int z =0; // to compaire element 1 with all other elements and so on
    for (size_t x = 0; x < sizearr; x++)
    {
        if (arr[x] == Suparr[z])
        {
            count++;
            z++;
        }
    }
    if (count == sizeSup)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}