#include <iostream>
using namespace std;
int main()
{
    int size;
    long long sum = 0;
    cin >> size;
    long long num = 0;
    cin >> num;
    while (num > 0)
    {
        sum += (num % 10); // to sum the last digit
        num /= 10;         // to remove the last digit
    }
    cout << sum << endl;
    
 
}
/*   
/*string num;
    cin >> num;
    for (size_t i = 0; i < size; i++)
    {
        sum += num[i]-'0'; // because the string is an array of char so i give sum using ASCII code
    }
    cout << sum << endl;*/