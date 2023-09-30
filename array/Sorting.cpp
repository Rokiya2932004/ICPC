#include <iostream>
#include <set>
using namespace std;
int main(){
    int size;
    cin >> size;
    multiset<int>s;
    int *arr= new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    for(auto it : s){
        cout<<it<<" ";
    }
}