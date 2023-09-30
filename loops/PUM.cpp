#include <iostream>
using namespace std;
int main()
{
    int t, c = 1;
    cin >> t;
    for (size_t i = 1; i <= t; i++)
    {
        if (c % 4 == 0)
        {
            c++;
            cout << "PUM" << endl; // to print PUM insted the num that %4 will give me 0
            i--;                    // to repeat the number after countinue this loop
            continue;
        }

        cout << c << " ";
        c++;
        cout << c << " ";
        c++;
        cout << c << " ";
        c++;
    }
    cout << "PUM" << endl;
}