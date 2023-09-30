#include <iostream>
#include <deque>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    string s;
    cin >> s;
    deque<char> d;
    stack<char> st;

    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        d.push_back(s[i]);
        if (d[i] == '(')
        {
            st.push(d[i]);
           
        }
        else
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
                c+=2; // because it is two ==> () 
            }
        }
    }
   
        cout <<c ;
    
   
}