#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<long long> fib(num);
    fib[0] = 0;
    fib[1] = 1;
    if (num == fib[0])
    {
        cout << 0 << endl;
        return 0;
    }
    if (num == fib[1])
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        for (size_t i = 2; i <= num; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
            fib.push_back(fib[i]);
        }
        cout << fib[num-1] << endl;
    }
}