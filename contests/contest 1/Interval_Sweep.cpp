#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b; // a for odd & B for even
    cin >> a >> b;
    if ((a == 0 && b == 0 ) || abs(a - b) >= 2)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}