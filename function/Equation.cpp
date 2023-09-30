#include <iostream>
#include <cmath>
using namespace std;
long long Equation(int x, int n)
{
    long long result = 0;
    for (size_t i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result += pow(x, i);
        }
    }

    return result;
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << Equation(x, y) << endl;
}