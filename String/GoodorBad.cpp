#include <string>
#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        bool found = false;
        string code;
        cin >> code;
        for (size_t i = 0; i < code.size() - 1; i++)
        {
            if (code[i] == '0' && code[i + 1] == '1' && code[i + 2] == '0')
            {
                found = true;
                break;
            }
            if (code[i] == '1' && code[i + 1] == '0' && code[i + 2] == '1')
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }
}
/*     if (code[i] == '010' || code[i] == '101')
            {
                cout << "Good" << endl;
                break;
            }
            else if()
            {
                cout << "Bad" << endl;
                break;
            }*/