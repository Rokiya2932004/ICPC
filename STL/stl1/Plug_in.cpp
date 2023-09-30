#include <iostream>
using namespace std;
int main()
{
    string w;
    cin >> w;
    string s;
    for (size_t i = 0; i < w.length(); i++)
    {
        if (w[i] == s.back())
            {
                s.pop_back();
            }
            else
            {
                s.push_back(w[i]);
            }
           
    }
    cout << s << endl;
}
 // s.push_back(w[i]);
        /*if (i < (w.length() - 1) && w[i] == w[i + 1])
        {
            i++;
        }
        else
        {
            
        }*/
/*int main()
{
    string w;
    cin >> w;
   stack<string> s;
     for (size_t i = 0; i < w.size()-1; i++)
    {
        if (i<w.size()-1 && w[i] == w[i+1])
        {
            i++;
        }
        else{
            s.push(w);
        }
    }
    for(int i = 0; i < s.size(); i++){

    }
}
/*int main()
{
    string w;
    cin >> w;
    string s;
    for (size_t i = 0; i < w.length(); i++)
    {
        if ( i< (w.length()-1) && w[i] == w[i + 1])
        {
            i++;
        }
        else
        {
           s.push_back(w[i]);
        }
    }
    cout << s << endl;
}
/*int main()
{
    string w;
    cin >> w;
    deque<string> d;
    for (size_t i = 0; i < (w.length() - 1); i++)
    {
        if (w[i] == w[i + 1])
        {
            continue;
        }
        else
        {
            d.push_back(w);
        }
    }
    for (auto it : d)
    {
        cout << it;
    }
}
/*int main()
{
    string w;
    cin >> w;
   // stack<string> s;
     for (size_t i = 0; i < w.size()-1; i++)
    {
        deque<string> d;
        d.push_back(w);
        if (d[i] == d[i + 1])
        {
            d.pop_back();
        }
        s.push(d[i]);
    }
    for(auto it : s){
        cout<<it;
    }
}*/