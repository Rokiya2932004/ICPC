#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int space = n-1;
    for (size_t i = 1; i <= n; i++)
    {
          
        for (size_t s = 1; s <=space ;  s++)
        {
            cout << " ";
        }
        for (size_t star = 1; star <i*2; star++) /* line2 --> 2*2 = 4 , star <i*2 --> ***    */
        {
            cout << "*";
        }
        space--;

        cout << endl;
    }
    
}