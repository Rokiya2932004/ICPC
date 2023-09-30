#include <iostream>
using namespace std;
void times(int n, char c)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << c << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    int n;
    char c;
    for (size_t i = 0; i < t; i++)
    {
        cin >> n >> c;
        times(n, c);
    }
}