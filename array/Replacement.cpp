#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int size ;
    cin >> size;
    int *arr= new int[size];
for (size_t i = 0; i < size; i++)
{
    cin >> arr[i];
    if (arr[i] == 0)
    {
        cout << 0<<" ";
    }
    else if (arr[i] != abs(arr[i])){
        cout << 2 <<" ";
    }
    else{
        cout<<1<<" ";
    }
    
}

}