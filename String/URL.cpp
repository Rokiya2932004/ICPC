#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    string url, quary;
    cin >> url;
    size_t pos = url.find('?');
    if (pos != string::npos)
    {
        quary = url.substr(pos + 1); // store all string after '?' 
        stringstream ss(quary);
        map<string, string> m;
        string pair;
        while (getline(ss, pair, '&')) // read the ss until '&' and store it in pair
        {
            size_t equalpos = pair.find('=');
            if (equalpos != string::npos)
            {
                string key = pair.substr(0, equalpos); // store string from 0 to equalpos as a key in the map
                string value = pair.substr(equalpos + 1);// store string from equalpos as a value in the map
                m[key] = value;
            }
        }
        vector<std::string> orderKey = {"username", "pwd", "profile", "role", "key"};
        for (auto it : orderKey)
        {
            cout << it << ": " << m[it] << endl;
        }
    }
}