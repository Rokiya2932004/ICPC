#include <iostream>
#include <cmath>
using namespace std;
bool prime(int x)
{
    bool flage = false;
    for (size_t i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0 && x != 2)
        {
            flage = true;
        }
    }
    if (flage)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "NO"<<endl;
        }
        else
        {
            if (prime(n))
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
        }
    }
}