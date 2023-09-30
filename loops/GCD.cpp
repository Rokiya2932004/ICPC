#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n1 , n2;
cin >> n1 >> n2;
int r = __gcd(n1 , n2); // need to update c++ compiler to work this function
cout<<r;

}
/*#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n1 , n2;
cin >> n1 >> n2;
if (n1 > n2)
{
    cout <<(n1%n2) << endl;
}
else{
    cout << (n2%n1) << endl;
}

}*/