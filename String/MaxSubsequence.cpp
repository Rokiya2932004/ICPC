#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int maxSubs = 1; // At least one character is a valid subsequence

    for (int i = 1; i < n; ++i)
    {
        if (s[i] != s[i - 1])
        {
            maxSubs++;
        }
    }

    cout << maxSubs << endl;

    return 0;
}

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sups=(n*(n+1))/2;
    cout<<sups<<endl;
}*/