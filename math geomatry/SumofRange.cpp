#include <iostream>
using namespace std;

int main()
{
    long long n1, n2;
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        int x = n1;
        n1 = n2;
        n2 = x;
    }
    n1--;
    long long s = ((n2 * (n2 + 1)) / 2) - ((n1 * (n1 + 1)) / 2);
    n1 -= n1 % 2; // if num is odd will remind 1 then i will sup it from the num to have even num else will remind 0 then the num will stell even
    n2 -= n2 % 2;
    long long se = ((n2 / 2) * ((n2 + 2) / 2)) - ((n1 / 2) * ((n1 + 2) / 2));
    long long so = s - se;
    cout << s << endl;
    cout << se << endl;
    cout << so << endl;
}

/*long long sum = ((n2 - n1 + 1) * ((n1 + n2) / 2));
    long long sumeven=0;
    n1--;
    n1 -=n1%2;
    n2 -=n2%2;

    long long sumodd = sum - sumeven;
    cout << sum << endl;
    // cout << sumeven << endl;
    // cout << sumodd << endl;*/
// long long sumeven = (n1 % 2 == 0 && n2 % 2 == 0) ? ((1 + (n2 - n1 + 1) / 2) * ((n1 + n2) / 2)) : ((x + y) / 2) * (1 + ((y - x) + 1) / 2);

// long long sum = ((n2*(n2+1)/2) - (n1*(n1+1)/2));
// long long sumeven = (())

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n1, n2;
//     cin >> n1 >> n2;
//     int n = (n2 - n1 + 1) / 2;
//     int ne = n / 2;
//     int no = n - ne;
//     cout << n << " " << ne << " " << no;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     long long n1, n2;
//     cin >> n1 >> n2;
//     if (n1 > n2)
//     {
//         int x = n1;
//         n1 = n2;
//         n2 = x;
//     }
//     long long sum = (((n2 - n1 + 1) / 2) * (n1 + n2));
//     long long numeven = floor((n2 - n1 + 1) / 2);
//     long long firsteven = (n1 % 2 == 0) ? n1 : n1 + 1;
//     long long lasteven = (n2 % 2 == 0) ? n2 : n2 - 1;
//     long long seven = ((numeven / 2) * (firsteven + lasteven));
//     long long nodd = ((n2 - n1) / 2) + 1;
//     long long fodd = (n1 % 2 == 1) ? n1 : n1 + 1;
//     long long sodd = ((nodd / 2) * (2 * n1 + (fodd - 1)));

//     cout << sum << endl;
//     cout << seven << endl;
//     cout << sodd << endl;
// }