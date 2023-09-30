#include<iostream>
using namespace std;
int main(){
    int n ,n2;
    cin>>n>>n2;
    string code;
    cin>>code;
    if(n+n2+1 != code.size()){
        cout<<"No"<<endl;
        return 0;
    }
    if (code[n] != '-')
    {
        cout<<"No"<<endl;
        return 0;
    }
    int c=0;
    for (size_t i = 0; i < code.size(); i++)
    {
        if (code[i] >= 48 && code[i] <= 57 && i !=n) // ASCII code to check if the code has num from 0 to 9
        {
           c++; 
        } 
    }
    if (c == n+n2)
    {
       cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
    
}