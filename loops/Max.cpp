#include <iostream>
using namespace std;
int main()
{
    int n, max = 0;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num > max) 
        {
            max = num;
        }
        
    }
    cout << max << endl;
}