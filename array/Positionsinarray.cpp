#include <iostream>
using namespace std;
int main(){
    int size ;
    cin >> size;
    int *arr=new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 10)
        {
            cout <<"A["<<i<<"]"<<" = "<<arr[i]<<endl;
        }
        
    }
    
}