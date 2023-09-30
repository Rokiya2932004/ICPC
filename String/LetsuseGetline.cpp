#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (size_t i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == '\\')
        {
            break;
        }
        cout << s[i] ;
    }
}