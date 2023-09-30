#include <iostream>
#include <queue>
using namespace std;
int main()
{
    string SM, SA, SR;
    cin >> SM >> SA >> SR;
    queue<char> m;
    queue<char> a;
    queue<char> r;
    char cP = 'M'; // tell the program that mohammed will start the game
    for (size_t i = 0; i < SM.size(); i++)
    {
        m.push(SM[i]);
    }
    for (size_t i = 0; i < SA.size(); i++)
    {
        a.push(SA[i]);
    }
    for (size_t i = 0; i < SR.size(); i++)
    {
        r.push(SR[i]);
    }
    while (true)
    {
        char CC; // the current card
        if (cP == 'M' && !m.empty())
        {
            CC = m.front(); // the current card = top card
            m.pop();
        }
        else if (cP == 'A' && !a.empty())
        {
            CC = a.front(); // the current card = top card
            a.pop();
        }
        else if (cP == 'R' && !r.empty())
        {
            CC = r.front(); // the current card = top card
            r.pop();
        }
        else
        { // to brack the loop if the queues are empty
            break;
        }
        cP = (CC-32); // current player will receive determine by the current card(-32 according to ASCII code to convert small letters to capital letters)
    }
    cout << cP << endl;
}

/*#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;

    for (size_t i = 0; i < 3; i++)
    {
        string w;
        cin >> w;
        string c;
        for (size_t j = 0; j < w.size(); j++)
        {
            c=w[j]; // mrm ==> c1 = m , s= m , c2 = r s= r only not r &m
            s.push(c);
        }
    }

        if (!s.empty() && s.top() == "m")
        {
            cout << "M\n";
            s.pop();
        }
        else if (!s.empty() && s.top() == "r")
        {
            cout << "R\n";
            s.pop();
        }
        else
        {
            cout << "A\n";
            s.pop();
        }

}*/