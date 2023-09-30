#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int n1, n2, sum = 0;
        cin >> n1 >> n2;
        if (n1 > n2)
        {
            for (size_t j = n2 + 1; j <= n1 - 1; j++)
            {
                if (j % 2 != 0)
                {
                    sum += j;
                }
            }
            cout << sum << endl;
        }
        else if (n1 < n2)
        {
            for (size_t j = n1 + 1; j <= n2 - 1; j++)
            {
                if (j % 2 != 0)
                {
                    sum += j;
                }
            }
            cout << sum << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
}