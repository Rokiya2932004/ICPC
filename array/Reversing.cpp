#include<iostream>
#include<deque>
using namespace std;
int main(){
    int size;
    cin >> size;
    int *arr=new int[size];
    deque<int>d;
   for (size_t i = 0; i < size; i++)
   {
     cin >> arr[i];
     d.push_front(arr[i]);
   }
   for (auto it : d)
   {
    cout <<it<<" ";
   }
  
}