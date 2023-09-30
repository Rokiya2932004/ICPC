#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int n1, n2, sum = 0;
        cin >> n1 >> n2;
        if (n1 <= 0 || n2 <= 0)
        {
            return 0;
        }
        else if (n1 > n2)
        {
            for (size_t i = n2; i <= n1; i++)
            {

                sum += i;
                cout << i << " ";
            }
            cout << "sum =" << sum << endl;
        }
        else if (n2 > n1)
        {
            for (size_t i = n1; i <= n2; i++)
            {

                sum += i;
                cout << i << " ";
            }
            cout << "sum =" << sum << endl;
        }
        else
        {
            for (size_t i = n1; i <= n2; i++)
            {

                sum += i;
                cout << i << " ";
            }
            cout << "sum =" << sum << endl;
        }
    }
}