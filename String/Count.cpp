#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for (size_t i = 0; i < s.size(); i++)
    {
        sum +=s[i]-'0';
        
    }
    cout << sum << endl;
}