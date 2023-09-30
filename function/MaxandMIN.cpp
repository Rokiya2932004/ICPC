#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int min = a[0];
    int max = a[n-1];
    cout << min << " " << max << endl;
}
// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int *a = new int[n];
//     multiset<int> s;
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         s.insert(a[i]);
//     }
//     multiset<int>::iterator first = s.begin();
//     multiset<int>::iterator last = s.end();
//     cout << *first << " " << *last << endl;
// }
