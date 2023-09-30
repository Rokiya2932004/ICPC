#include <iostream>
using namespace std;
int main()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;
    for (size_t i = 1; i <= n; i++)
    {
        if (i / 10 == 0) // check if the num have one digit
        {
            if (i >= a && i <= b) // check if the num that have one digit in range from a --> b
            {
                sum += i;
            }
        }
        else
        {
            int num = i ;
            int sumOfDigits = 0;
            while (num){
                int digit = num % 10; // but the last digit at variable
                sumOfDigits += digit; 
                num/=10; // to remove the last digit
            }
            if (sumOfDigits >= a && sumOfDigits <= b) // a=2 , b =5 ,num=12, sum of digits = 3 so the num 13 in range from a --> b
            {
                sum += i; // increment sum with the num that have two digit in range from a--> b
            }
            
        }
    }
    cout << sum <<endl;
}