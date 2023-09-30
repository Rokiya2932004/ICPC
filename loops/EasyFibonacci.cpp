#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> d;
    d[1] = 0; //The elements d[1] and d[2] are set to 0 and 1 respectively, corresponding to the first two Fibonacci numbers.
    d[2] = 1;
    for (size_t i = 1; i <= n; i++)
    {
        if (i > 2)
        {
            d[i] = d[i - 1] + d[i - 2];
        }
        cout << d[i] << " ";
    }
}

/*#include <iostream>
using namespace std;
int main()
{
    int n , s=0 , se=1;
    cin >> n;
    if (n == 1){
        cout<<0<<endl;
    }
    else if(n == 2){
        cout<<0<<" "<<1;
    }
   else{
    cout<<0<<" "<<1<<" ";
    for (size_t i = 2; i < n; i++)
    {
        int res= s+se;
        cout<<res<<" ";
        s=se;
        se=res;
    }

   }
}*/