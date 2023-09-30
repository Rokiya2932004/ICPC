#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <forward_list>
#include<stack>
#include <queue>
#include <set>
using namespace std;
int main() {
	set<int>s{1,2,3};
	s.insert(4);
	s.insert(0);
for(auto i : s){
	cout << i;
}
	/*priority_queue<int>pq;
	for (int i: {10,50,100})  
	{
		pq.push(i);
	}
	while (!pq.empty()){
		cout<<pq.top()<<" ";
        pq.pop();
	}
	
	/*stack<int>s;
		s.push(1);
		s.push(2);
		s.push(3);
		stack<int>s1;
		for (auto a :{10,20,30}){
			s1.push(a);
		}
		s.swap(s1);
	for(int i =0; !s1.empty();i++) {
		cout<<s1.top()<<endl;
		s1.pop();
	}
	/*forward_list<int>f{2,3,4};
	forward_list<int>f1{20,30,40};
	f.splice_after(f.before_begin(), f1,f1.before_begin(),f1.end());
	for(auto i : f) {
		cout<<endl<<i;
	}
	//f.emplace_after(f.before_begin(), 1);
	/*auto f1 = next(f.begin(),2);
	cout << *f1<<endl;*/
	

	/*vector<int>v={1,2,3};
	list<int>l1={10,20,30};
	list<int>l2={50,60,70};
	/*v.push_back(5);
	cout << v.size() << "\n";
	cout << v.capacity();*/
/*	v.insert(v.begin()+3,5);
	l.insert(l.end()-2,40);
	for(auto i : v) {
		cout<<i<<" ";
	}*/
//l1.splice(l1.end(),l2);
/*auto i=l1.begin();
i++;
*i = 0;
/*for (i=l1.begin();i!=l1.end() ; i++)
{
		cout<<endl<<*i;
}*/


}