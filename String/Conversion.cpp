#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (size_t i = 0; i <= s.size() ; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = tolower(s[i]);
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;
}