#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
for (size_t i = 1; i <= n; i++)
{
    if (n % i == 0)
    {
        cout<<i<<endl;  
    }
    
}



}