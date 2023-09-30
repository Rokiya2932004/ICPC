#include <iostream>
using namespace std;
int main(){
long long a,b,k; // a for memo , b for momo and k for divide
cin>>a>>b>>k;
if (a % k == 0 && b % k == 0)
{
    cout<<"Both";
}
else if (a % k == 0){
    cout<<"Memo";
}  
else if (b % k == 0){
    cout<<"Momo";
} 
else{
    cout<<"No One";
}
return 0;


}