#include <iostream>
using namespace std;
int main()
{
    int num, ce = 0, co = 0, cn = 0, cp = 0;
    cin >> num;
    for (size_t i = 0; i < num; i++)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            ce++;
        }
        else if (n % 2 != 0)
        {
            co++;
        }
        if (n < 0)
        {
            cn++;
        }

        else if (n > 0)
        {
            cp++;
        }
    }
    cout << "Even: " << ce << endl;
    cout << "Odd: " << co << endl;
    cout << "Positive: " << cp << endl;
    cout << "Negative: " << cn << endl;
}