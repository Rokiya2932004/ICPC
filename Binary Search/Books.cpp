#include <iostream>
using namespace std;
int main(){
    int b , fm,c=0;
    cin >> b >> fm;
    for (size_t i = 0; i < b; i++)
    {
        int m;
        cin >> m;
        if (m <=fm)
        {
           c++;
        } 
        else if (m==fm)
        {
            break;
        }
          

    }
    cout << c << endl;

}