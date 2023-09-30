#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>v={10,20,30};
v.push_back(50);
v.pop_back();
cout<<v.size()<<"\n";
cout<<v.capacity()<<"\n";
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}



}