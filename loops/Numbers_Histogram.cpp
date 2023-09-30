#include <iostream>
using namespace std;
int main()
{
    char s;
    int n;
    cin >> s >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (s == '+')
        {
            for (size_t j = 0; j < arr[i]; j++)
            {
                cout << '+';
            }
            cout << endl;
        }
        else if (s == '-')
        {
            for (size_t j = 0; j < arr[i]; j++)
            {
                cout << '-';
            }
            cout << endl;
        }
        else if (s == '*')
        {
            for (size_t j = 0; j < arr[i]; j++)
            {
                cout << '*';
            }
            cout << endl;
        }
        else if (s == '/')
        {
            for (size_t j = 0; j < arr[i]; j++)
            {
                cout << '/';
            }
            cout << endl;
        }
    }
}