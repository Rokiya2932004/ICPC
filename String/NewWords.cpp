#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c;
    unordered_map<char, int> freq;
    freq['e'] = 0;
    freq['g'] = 0;
    freq['y'] = 0;
    freq['p'] = 0;
    freq['t'] = 0;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'e' || s[i] == 'g' || s[i] == 'y' || s[i] == 'p' || s[i] == 't')
        {
            freq[s[i]]++;
        }
    }
    c = min(freq['e'], min(freq['g'], min(freq['y'], min(freq['p'], freq['t']))));
    cout << c << endl;
}