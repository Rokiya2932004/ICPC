#include <string>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s = to_string(n);
        string rev;
        for (int j = s.size()-1; j>=0; j--)
        {
            rev.push_back(s[j]);
             rev.push_back(' ');
        }
        cout << rev<< endl;
    }
}