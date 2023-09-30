#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int counter = 0; // to check how many divisors a number i has.
        for (int j = n; j >= 1; j--) //checks for divisors of the current number i
        {
            if (i % j == 0)
            {
                counter++;
            }
        }
        if (counter == 2)
        {
            cout << i << " ";
        }
    }

}




/*using namespace std;
int main(){
    int n ;
    cin >> n;
    for(int i = 2; i*i <= n; i++){
        if (n % i != 0)
        {
            cout << i << " ";
        }

    }


}*/
