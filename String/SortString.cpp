#include <iostream>
using namespace std;
int main()
{
    int n, arr[26] = {0};
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        arr[int(c) - 97]++; //  cba -> c=99 arr[99-97]=2 at index 2 i have two (c) according to ASCII
    }
    for (size_t i = 0; i <= 25; i++)
    {
        while (arr[i] != 0) // to loop through the size of the array i was full it is index with value
        {
            cout << char(i + 97); // to convert index to it is char
            arr[i]--;
        }
    }
}

/*#include<iostream>
#include<set>
using namespace std;
int main(){
    int size;
    cin >> size;
    multiset<char> ms;
    for (size_t i = 0; i < size; i++)
    {
        char c;
        cin >> c;
        ms.insert(c);
    }
    for(auto it : ms){
        cout << it;
    }

}*/