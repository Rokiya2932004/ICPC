#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (size_t i = n; i >= 1; i--)
    {
        int j=i;
        while(j--){
            cout<<'*';
        }
        cout<<'\n';
    }
    
}