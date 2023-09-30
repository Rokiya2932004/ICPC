#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string s;
    int n;
    cin >> n;
    cin.ignore();
    getline(cin, s);
    if (n == 1)
    {

        for (size_t i = 0; i < s.size(); i++)
        {
            int pos = Original.find(s[i]);
            if (pos != string::npos)
            {
                s[i] = Key[pos];
            }
        }
        cout << s << endl;
    }
    else if (n == 2)
    {
        for (size_t i = 0; i < s.size(); i++)
        {
            int pos = Key.find(s[i]);
            if (pos != string::npos)
            {
                s[i] = Original[pos];
            }
        }
        cout << s << endl;
    }
}