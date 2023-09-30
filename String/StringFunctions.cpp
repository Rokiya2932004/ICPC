#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size, quary;
    cin >> size >> quary;
    string s;
    cin >> s;
    while (quary--)
    {
        string g;
        cin >> g;
        int l, r;
        if (g == "pop_back")
        {
            s.pop_back();
        }
        else if (g == "front")
        {
            cout << s.front() << endl;
        }
        else if (g == "back")
        {
            cout << s.back() << endl;
        }
        else if (g == "sort")
        {
            cin >> l >> r;
            if (l < r)
            {
                sort(s.begin() + l - 1, s.begin() + r);
            }
            else
            {
                sort(s.begin() + r - 1, s.begin() + l);
            }
        }
        else if (g == "reverse")
        {
            cin >> l >> r;
            if (l < r)
            {
                reverse(s.begin() + l - 1, s.begin() + r);
            }
            else
            {
                reverse(s.begin() + r - 1, s.begin() + l);
            }
        }
        else if (g == "print")
        {
            int p;
            cin >> p;
            cout << s[p - 1] << endl;
        }
        else if (g == "substr")
        {
            cin >> l >> r;
            if (l < r)
            {
                cout << s.substr(l - 1, r - l + 1) << endl;
            }
            else
            {
                cout << s.substr(r - 1, l - r + 1) << endl;
            }
        }
        else if (g == "push_back")
        {
            char j;
            cin >> j;
            s.push_back(j);
        }
    }
}