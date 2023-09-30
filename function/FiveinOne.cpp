#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool isprime(int s)
{
    if (s <= 1)
    {
        return false;
    }
    for (size_t i = 2; i <= sqrt(s); i++)
    {
        if (s % i == 0 && s != 2)
        {
            return false;
        }
    }
    return true;
}
bool palindrome(int num)
{
    int n = num;
    int sum = 0;
    int lastDigit;
    while (num > 0)
    {
        lastDigit = n % 10;
        sum = (sum * 10) + lastDigit; // (sum * 10 ) to add digit to current num
        num /= 10;
    }
    if (n == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int div(int num)
{
    int divisor = 0;
    for (size_t i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            divisor++;
        }
    }
    return divisor;
}
int main()
{
    int n, cp = 0, cpalind = 0, maxdiv = 0, maxDivisors = 0;
    cin >> n;
    int *a = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << "The maximum number : " << a[n - 1] << endl;
    cout << "The minimum number : " << a[0] << endl;
    for (size_t i = 0; i < n; i++)
    {
        if (isprime(a[i]))
        {
            cp++;
        }
        if (palindrome(a[i]))
        {
            cpalind++;
        }
        int divs = div(a[i]);
        if (divs > maxDivisors)
        {
            maxDivisors = divs;
            maxdiv = a[i];
        }
        else if (divs == maxDivisors && a[i] > maxdiv)
        {
            maxdiv = a[i];
        }
    }

    cout << "The number of prime numbers : " << cp << endl;
    cout << "The number of palindrome numbers : " << cpalind << endl;
    cout << "The number that has the maximum number of divisors : " << maxdiv << endl;
}