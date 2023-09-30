#include <iostream>
using namespace std;
int main()
{
    long long x, y, z;
    cin >> x >> y >> z;
    int result = z % 3; // z >=3 so taken modelas will return 1 or 2 or 3 and others 
    if (result == 1)
    {
        cout << x << endl;
    }
    else if (result == 2)
    {
        cout << y << endl;
    }
    else
    {
        cout << (x ^ y) << endl;
    }
}