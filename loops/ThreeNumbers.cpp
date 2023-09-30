#include<iostream>
using namespace std;
int main(){
    int n , sum,c=0;
    cin >> n >> sum;
    for (size_t i = 0; i <= n; i++)
    { 
       for (size_t j = 0; j <= n; j++)
       {
        
         if ((sum -i-j) >=0 && (sum -i-j) <=n)
         {
            c++;
         } 
       }     
    }
    cout << c << endl;
}