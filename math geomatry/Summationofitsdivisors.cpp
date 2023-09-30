#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    for (size_t i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)  
        {
            sum += i;
            if (i != sqrt(n))
            {
                sum += n / i;
            }
        }
    }
    cout << sum << endl;
}