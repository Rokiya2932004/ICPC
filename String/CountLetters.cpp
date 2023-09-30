#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    map<char, int> fres;
    int c = 1;
    for (size_t i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
        else
        {
            fres[s[i]] = c;

            c = 1;
        }
    }
    fres[s.back()] = c;
    for (auto it : fres)
    {
        cout << it.first << " : " << it.second << endl;
    }
}