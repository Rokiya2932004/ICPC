#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string sn = to_string(n); // convert to string
    string reverseSn;
    for (int i = sn.size() - 1; i >= 0; i--)
    {
        reverseSn.push_back(sn[i]);
    }
    int nrsn=stoi(reverseSn); // to convert from string to int
    cout<<nrsn<<endl;
    if (reverseSn == sn)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}













// ########  TIME LIMETE ##############
/*#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string s;
    int n, rn;
    cin >> s; // 2020 --> ['2','0','2','0'] because string is an array of char
    int size = s.size();
    char reverseS[size];
    int c = 0;
    for (size_t i = size - 1; i >= 0; i--) // to start from the last index to the first
    {
        reverseS[c] = s[i]; // at index 0 put the last element
        c++;
    }
    // converting from string to int
    stringstream ss;
    ss << s;
    ss >> n;
    stringstream ss2;
    ss2 << reverseS;
    ss2 >> rn;
    cout << rn << endl;
    if (n == rn)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}*/

/*#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    v.push_back(n);
    vector<int> rv;
    rv=v.reverse(v.begin(), v.end());
    if (v==rv)
    {
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }

}*/