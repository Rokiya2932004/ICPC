#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int size;
    long long sum=0;
    cin>>size;
    for (size_t i = 1; i <= size; i++)
    {int num;
    cin>>num;
        sum +=num;
    }
    cout<<abs(sum)<<endl;
    
}