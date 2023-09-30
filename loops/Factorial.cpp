#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        long long c = 1;
        cin >> n;

        if (n == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                c *= j;
            }
            cout << c << endl;
        }
    }

    return 0;
}
