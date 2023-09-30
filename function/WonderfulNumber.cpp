#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool even(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool binary(int x)
{
    int mod;
    string BinaryN, RevBinaryN;
    while (x)
    {
        mod = x % 2;
        x = x / 2;
        if (mod == 0)
        {
            BinaryN += "0";
        }
        else
        {
            BinaryN += "1";
        }
    }
    RevBinaryN = BinaryN;
    reverse(RevBinaryN.begin(), RevBinaryN.end());
    if (BinaryN == RevBinaryN)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    if (even(n))
    {
        cout << "NO" << endl;
    }
    else
    {
        if (binary(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}