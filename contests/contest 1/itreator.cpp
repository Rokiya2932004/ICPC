#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
vector<int>v={1,2,3};
/*v.insert(v.begin()+1,5);
v.insert(v.end(),10);*/
v.emplace(v.begin(),4); //add 4 in the first index
v.emplace_back(10); //add 10 in the last index
v.erase(v.begin()+1); //remove the second element (1) 
v.resize(5);
v.shrink_to_fit();
for(auto it:v){
    cout<<it<<endl<<endl;
}
cout<<*min_element(v.begin(),v.end())<<endl; 
    return 0;
}