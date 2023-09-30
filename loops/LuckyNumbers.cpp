#include <iostream>
using namespace std;
int main()
{
    int n1, n2, c = -1;
    cin >> n1 >> n2;
    for (size_t i = n1; i <= n2; i++)
    {
        int count = 0, x = i;//count->used to count the non-4 and non-7 digits in the current number,x-> extracted num to digit (i=20 -> x=[first digit=2,last digit=0])

        while (x)//loop is used to extract digits from the number x
        {
            if (x % 10 != 4 && x % 10 != 7) // check if the last digit not equals 4 or 7 
            {
                count++;
            }
            x /= 10; // remove the last digit 
        }
        if (count == 0) //it means that all digits were 4 or 7
        {
            cout << i << " ";
            c++;
        }
    }
    if (c == -1)
    {
        cout << c << endl;
    }
}