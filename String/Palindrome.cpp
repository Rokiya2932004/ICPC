#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    string s , swapS;
    cin >> s ;
    swapS =s; 
    reverse(swapS.begin(), swapS.end());
    if (s == swapS)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}