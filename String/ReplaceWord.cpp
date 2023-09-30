#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string replaced = "EGYPT";
    size_t pos = s.find(replaced); // find the position of the word
    while (pos != string::npos)
    {
        s.replace(pos, replaced.length()," "); // start replace when u find first char of the word till the last char with only 1space
        pos = s.find(replaced, pos+1); // searching on the repetetion of the word after the index of last char on it  
    }
    cout<<s<<endl;
}