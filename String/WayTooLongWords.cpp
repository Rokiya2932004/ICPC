#include <iostream>
#include <string>
using namespace std;
int main()
{
    int test;
    cin >> test;
    string s;
    while (test--)
    {
        cin >> s;
        if (s.length()  <= 10)
        {
            cout << s << endl;
        }
        else
        {
            cout << s[0] << s.size() - 2 << s.substr(s.size() - 1) << endl;
        }
    }
}