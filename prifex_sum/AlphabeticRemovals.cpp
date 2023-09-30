#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int size, removedchar;
    string s, w;
    // stack<string> w;
    cin >> size >> removedchar;
    cin >> s;
for (size_t i = 0; i < size; i++)
{
    for (int j = 0; j < removedchar; j++){
        if (w[j] ==s['a'])
        {
            w.pop_back();
        }
        else if (!w.empty() && s[i] == 'b'){
            w.pop_back();
        }
        else {
            w.push_back(s[i]);
        }
        break;
    }
    
}
cout << w << endl;
}





   /* for (size_t i = 0; i < size; i++)
    {
        if (s[i] == 'a')
        {
            for (size_t i = 0; i < removedchar; i++)
            {
                w.pop_back(s[i]);
            }
        }
        else if (!w.empty() && s[i] == 'b')
        {
            for (size_t i = 0; i < removedchar; i++)
            {
                s.pop_back();
            }
        }
        else
        {
            w.push_back(s[i]);
        }
    }
    cout << w;
}*/