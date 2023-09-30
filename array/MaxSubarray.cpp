#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        int *arr = new int[size];
        for (size_t i = 0; i < size; i++)
        {
            cin >> arr[i];
            cout << arr[i] <<" ";
        }
        int i=0, x = 0,maximum;
        while (true)
        {
            if (x == size-1) 
            {
                break;
            }
            if (i==x)
            {
                maximum= max(arr[i],arr[i+1]);
            }
            else{
                maximum= max(maximum,arr[i+1]);
            }
            cout<<maximum<<" ";
            i++;
            if (i ==size-1)
            {
             x++;
             i=x;    
            }
            
            
        }
        cout<<endl;
    }
}