#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double p , n,x ; //p is the percentage , n is a price after discount , x is the price before discount we use double to print decimal number if we use long it will make uncorrect answer
cin>>p>>n;
 x = (n/(1-(p/100))); 
cout<<fixed<<setprecision(2)<<x;
return 0;
}


