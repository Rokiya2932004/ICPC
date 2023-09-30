#include <iostream>
using namespace std;
int main(){
char x;
cin>>x;
if (x =='z')
{
    cout<<"a";
}
else 
cout<<char(x+1)<<endl; //x+1 to give the next character in ASCII code and char to convert it from ASCII to character


}