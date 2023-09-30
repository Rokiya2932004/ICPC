#include <iostream>
using namespace std;
int main()
{
    int t, n, num; // n is num of friends , num is num of juce
    
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int c = 0;
        cin >> n >> num;
        int *arr = new int[n];
        int *arr1 = new int[n];
        int j = 0, k = 0;
        for (; j < n; j++)
        {

            cin >> arr[j];
        }
        for (; k < n; k++)
        {
            cin >> arr1[k];
        }
       for(int s  = 0; s < n; s++){
         if(arr[s] ==arr1[s]){
            c++;
            
        }
       }
        
        
        cout << c << endl; // c =0  2--- c=2
     
    }
}