#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;                // hello world
    getline(cin, s);         // accept string with spaces
    bool insideWord = false; // check if h at hello or not
    int c = 0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]) || s[i] == '\'') // Check if character is a letter and not inside a word &letters and apostrophes
        {
            if (!insideWord)
            { 
                insideWord = true;
                c++;
            }
        }
        else
        {
            insideWord = false; // means i have a new word
        }
    }
    cout << c << endl;
}