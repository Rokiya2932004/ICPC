#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size, mini, pos ;
    cin >> size;
    int *arr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    mini = arr[0];
    pos=1; 
    for (size_t i = 1; i < size; i++)
    {
        if (mini > arr[i])
        {
            mini = arr[i];
            pos= i+1;
        }   
    }
    cout << mini <<" "<<pos<< endl;
}
/*int main()
{
    int size, mini, pos=1;
    cin >> size;
    int *arr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
        mini= arr[i];

        if (mini > arr[i+1 ])
        {
            mini=arr[i+1];
            pos++;
            break;
        }
        else{
            mini=arr[i];
            pos++;
            break;
        }
      // mini= min(arr[i],arr[i+1]);
    }
    cout<<mini <<" "<<pos<<endl;
    /*for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] <= min)
        {
            arr[i] = min;
            pos = i + 1;
            break;
        }
    }
    cout<<min <<" "<<pos<<endl;*/
//}