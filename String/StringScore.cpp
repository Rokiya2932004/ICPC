#include <string>
#include <iostream>
using namespace std;
int main()
{
    int n, score = 0;
    cin >> n;
    string s;
    cin >> s;
    for (size_t i = 0; i < s.size(); i++)
    {

        switch (s[i])
        {
        case 'V':
            score += 5;
            break;
        case 'W':
            score += 2;
            break;
        case 'X':
            if (i + 1 < s.size()) // check if there is next character
            {
                i++;
                // s.erase(i + 1, 1); // remove the next character
                //  decrement the size
            }
            break;
        case 'Y':
            if (i + 1 < s.size())
            {
                char nextChar = s[i + 1];
                i++;
                // s.erase(i + 1, 1); // to remove only the next character
                s += nextChar;
            }
            break;
        case 'Z':
            if (i + 1 < s.size() && (s[i + 1] == 'V' || s[i + 1] == 'W'))
            {
                if (s[i + 1] == 'V')
                {
                    score /= 5;
                }
                else if (s[i + 1] == 'W')
                {
                    score /= 2;
                }
                // s.erase(i + 1, 1);
                i++;
            }
            break;
        }
    }
    cout << score << endl;
}

/*if (s[i] == 'V')
        {
            score += 5;
        }
        else if (s[i] == 'W')
        {
            score += 2;
        }
        else if (s[i] == 'X')
        {
            if (i + 1 < n) // check if there is next character
            {
                s.erase(i + 1,1); // remove the next character
                n--;            // decrement the size
            }
        }
        else if (s[i] == 'Y')
        {
            if (i + 1 < n)
            {
                char removed = s[i + 1];
                s.erase(i + 1,1); // to remove only the next character
                s += removed; // adding the char i had removed to the end of the string
                //cout << s << endl;
            }
        }
        else if (s[i] == 'Z')
        {
            if (i + 1 < n && s[i + 1] == 'V' || s[i + 1] == 'W')
            {
                if (s[i + 1] == 'V')
                {
                    score /= 5;
                }
                else if (s[i + 1] == 'W')
                {
                    score /= 2;
                }
                s.erase(i + 1,1);
            }
        }*/