#include <string>
#include <vector>
#include <iterator>
#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        vector<char> v;
        if (s1.size() >= s2.size())
        {
            for (size_t i = 0; i < s1.size(); i++)
            {
                v.push_back(s1[i]);
                if (i < s2.size())
                {
                    v.push_back(s2[i]);
                }
            }
        }
        else if (s2.size() > s1.size())
        {
            for (size_t i = 0; i < s2.size(); i++)
            {
                if (i < s1.size())
                {
                    v.push_back(s1[i]);
                }
                v.push_back(s2[i]);
            }
        }
        vector<char>::iterator j = v.begin();
        for (; j != v.end(); j++)
        {
            cout << *(j);
        }
        cout << endl;
    }
}