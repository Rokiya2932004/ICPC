#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int t;
    cin >> t;
    stack<string> s;
    int cH = 0;
    bool H = true; // check that there is no Header
    for (size_t i = 0; i < t; i++)
    {
        string w;
        cin >> w;
        if (w != "Header" && H == true) // HTML should start with header
        {
            cout << "WA" << endl;
            return 0;
        }
        H = false; // there is a Header
        if (w == "Header")
        {
            cH++; 
        }
        if (cH!=1) // first time the counter will = 1 so it will complete the program & start from line 37 & 43(think as compiler at go step by step by step by step by step by step by step be_ i am tired)
        {
             cout << "WA" << endl;
            return 0;
        }
        
        else
        {
            if (s.empty())
            {
                s.push(w);
            }
            else
            {
                if (w == "End" + s.top())
                {
                    s.pop(); // header , cell ,(w= endcell ?) then it well remove "cell"
                }
                else
                {
                    s.push(w);
                }
            }
        }
    }
    if (s.empty())
    { // after ending the loop the stack should be empty according to the codition in line 24
        cout << "ACC\n";
    }
    else
    {
        cout << "WA" << endl;
    }
}

/*###################################################*/
/*#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<string> s;
    bool Headercheck = true; // no header found
    int numofHeader = 0;
    while (n--)
    {
        string x;
        cin >> x;
        if (x != "Header" && Headercheck == true)
        {
            cout << "WA\n";
            return 0;
        }
        Headercheck = false;
        if (x == "Header")
        {
            numofHeader++;
        }
        if (numofHeader != 1)
        {
            cout << "WA\n";
            return 0;
        }
        if (s.empty())
        {
            s.push(x);
        }
        else
        {
            if (x == "End" + s.top())
            {
                s.pop();
            }
            else
            {
                s.push(x);
            }
        }
    }
    if (s.empty())
    {
        cout << "ACC\n";
    }
    else
    {
        cout << "WA\n";
    }

    return 0;
}
/*###################################################*/

/*#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    int t;
    cin >> t;
    int c = 0;
    for (size_t i = 0; i < t; i++)
    {
        string w;
        cin >> w;
        if (w != "Header")
        {
            cout << "WA\n";
            return 0;
        }
        else
        {
            s.push(w);
       }
        for (size_t i = 0; i < t; i++)
    {
        if (!s.empty() && w == "End" + s.top())
        {
            s.pop();
            c++;
        }
        else
        {
            cout << "WA\n";
            return 0;
        }
    }

    }

    if (c != 0)
    {
        cout << "ACC\n";
    }
    else
    {
        cout << "WA\n";
    }
}
/*#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<string> tagStack;
    bool headerFound = false;

    for (int i = 0; i < n; i++) {
        string tag;
        cin >> tag;

        if (tag == "Header") {
            if (headerFound) {
                cout << "WA\n"; // Invalid: Another "Header" tag found
                return 0; // Exit the program
            }
            headerFound = true;
        } else if (!tagStack.empty() && tag == "End" + tagStack.top()) {
            tagStack.pop();
        } else {
            cout << "WA\n"; // Invalid tag found
            return 0; // Exit the program
        }

        if (tag != "EndHeader") {
            tagStack.push(tag);
        }
    }

    if (!tagStack.empty() || !headerFound) {
        cout << "WA\n"; // Unmatched tags found or Header not found
    } else {
        cout << "ACC\n"; // All tags are properly matched, and Header is found
    }

    return 0;
}

/*#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<string> tagStack;
    bool headerFound = false;

    string startTags[] = {"Header", "Row", "Cell", "Table"};
    string endTags[] = {"EndHeader", "EndRow", "EndCell", "EndTable"};

    for (int i = 0; i < n; i++) {
        string tag;
        cin >> tag;

        if (tag == startTags[0]) {
            if (headerFound) {
                cout << "WA\n"; // Invalid: Another "Header" tag found
                return 0; // Exit the program
            }
            headerFound = true;
        } else if (!tagStack.empty() && tag == endTags[tagStack.size() - 1]) {
            tagStack.pop();
        } else {
            cout << "WA\n"; // Invalid tag found
            return 0; // Exit the program
        }

        // Push the tag onto the stack
        tagStack.push(tag);

        // Check for valid nesting
        if (tag == endTags[0]) {
            headerFound = false; // Reset headerFound to false for nesting validation
            while (!tagStack.empty()) {
                string topTag = tagStack.top();
                tagStack.pop();
                if (topTag == startTags[0]) {
                    break; // Found the corresponding "Header" tag, valid nesting
                } else if (topTag != endTags[0]) {
                    cout << "WA\n"; // Invalid: Incorrect nesting
                    return 0; // Exit the program
                }
            }
        }
    }

    if (tagStack.empty()) {
        cout << "ACC\n";
    } else {
        cout << "WA\n"; // Unmatched tags found
    }

    return 0;
}

/*#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<string> tagStack;
    bool headerFound = false;

    string startTags[] = {"Header", "Row", "Cell", "Table"};
    string endTags[] = {"EndHeader", "EndRow", "EndCell", "EndTable"};

    for (int i = 0; i < n; i++) {
        string tag;
        cin >> tag;

        if (tag == startTags[0]) {
            if (headerFound) {
                cout << "WA\n";
                return 0;
            }
            headerFound = true;
            tagStack.push(tag);
        } else if (!tagStack.empty() && tag == endTags[tagStack.size() - 1]) {
            tagStack.pop();
        } else {
            cout << "WA\n"; // Invalid tag found
            return 0; // Exit the program
        }
    }

    if (tagStack.empty()) {
        cout << "ACC\n";
    } else {
        cout << "WA\n"; // Unmatched tags found
    }

    return 0;
}





/*#include <iostream>
#include <stack>
#include <string>
#include <deque>
using namespace std;
int main()
{
    deque<string> d;
    int t;
    cin >> t;
    int c = 0;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        d.push_back(s);
    }
    while (!d.empty())
    {
        if (d.front() == "Header" && d.back() == "EndHeader")
        {
            d.pop_back();
            d.pop_front();
            c++;
        }
        else if (d.front() == "Cell" && d.back() == "EndCell")
        {
            d.pop_back();
            d.pop_front();
            c++;
        }
        else if (d.front() == "Row" && d.back() == "EndRow")
        {
            d.pop_back();
            d.pop_front();
            c++;
        }
        else if (d.front() == "Table" && d.back() == "EndTable")
        {
            d.pop_back();
            d.pop_front();
            c++;
        }
    }
    if (!d.empty() && c != 0)
    {
        cout << "ACC\n";
    }
    else
    {
        cout << "WA\n";
    }
    /*stack<string> s;
    stack<string> s2;
    string tag[] = {"Header", "Cell", "Row", "Table"};
    string endt[] = {"EndHeader", "EndCell", "EndRow", "EndTable"};
    for (int i = 0; i < t; i++)
    {
        string t;
        cin >> t;
        if (t == tag[i])
        {
            s.push(t);
        }
        else if (t == endt[i]){
            s2.push(t);
        }

    }*/
/*}*/