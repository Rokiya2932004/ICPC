#include <iostream>
using namespace std;
int Print(int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << i << " ";
    }
    return n;
}
int main()
{
    int x;
    cin >> x;

    cout << Print(x) << endl;
}