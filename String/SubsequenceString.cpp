#include<iostream>
using namespace std;
int main(){
    string s , h = "hello";
    cin >> s;
    int c=0,l=0;
    for (size_t i = 0; i < s.size()-1; i++)
    {
        if(s[i]==h[l]){
            c++;
            l++;
        }
    }
    if (c==h.size())
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
}