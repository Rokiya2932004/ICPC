#include <iostream>
#include<algorithm>
#include <numeric>
using namespace std;
int main(){
    long long n1 , n2;
    cin >> n1 >> n2;
    long long  g = __gcd(n1,n2);
    long long  l = (n1 * n2)/ __gcd(n1,n2);
    cout<< g << " " << l << endl;
}