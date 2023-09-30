#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    double p = log2(n);
    if (n < 0 && n == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (p == (int)p)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
// bool not= false;
//  while(!not){
//      int i=1;
//      double res = pow(2,i);
//      if (res == n)
//      {
//          cout << "YES" << endl;
//      }
//      else if(i < n){
//          i++;
//      }
//      else{
//          not=true;
//          cout<<"NO" << endl;
//      }

// }

// long long x = log(n);
// cout << x ;
// // if (x % 2 == 0)
// // {
// //    cout<< "YES"<< endl;
// // }
// // else{
// //     cout<< "NO"<< endl;
// // }