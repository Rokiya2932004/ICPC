#include <iostream>
#include <set>
using namespace std;
int main()
{
    int size, c = 0;
    cin >> size;
    multiset<int> s1;
    multiset<int> s2;
    for (size_t i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        s1.insert(n);
    }
    for (size_t j = 0; j < size; j++)
    {
        int n2;
        cin >> n2;
        s2.insert(n2);
    }
    for (size_t k = 0; k < size; k++)
    {
        if (s1 == s2)
        {
            c++;
        }
        else
        {
            cout << "no" << endl;
            return 0;
        }
    }
    if (c == size)
    {
        cout << "yes" << endl;
    }
}