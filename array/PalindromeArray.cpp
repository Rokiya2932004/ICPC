#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int size, cp=0 ;
    cin >> size;
    deque<int> d;
    int *arr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
        d.push_front(arr[i]);
    }
    for (size_t i = 0; i < size; i++)
    {
        if (d[i] == arr[i])
        {
            cp++;
        }
    }
    if (cp == size) // to check if all elements are equals 
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

