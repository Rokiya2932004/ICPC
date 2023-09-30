#include <iostream>
using namespace std;
int main(){
    int n, c=0;
    cin >> n;
    for (size_t i = 2; i <=(n/2); i++)
    {
        if (n%i == 0) // to check if the num can be devided by any number 
        {
            c++;
            break;
        }
        
    }
    
    if (c==0    )
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}