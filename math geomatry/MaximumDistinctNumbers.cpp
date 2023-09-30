#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    for (size_t i = 1;; i++)
    {
        if (i > n)
        {
            cout << i - 1 << endl;
            return 0;
        }
        else
        {
            n -= i;
        }
    }
}