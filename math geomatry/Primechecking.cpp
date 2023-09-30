#include <iostream>
#include <cmath>
using namespace std;
bool isprime(long long n)
{
    bool flag = false;
    if (n < 2)
    {
        flag = true;
    }
    for (size_t i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0 && n != 2)
        {
            flag = true;
        }
    }
    if (flag)
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
    long long n;
    cin >> n;
    if (isprime(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}