#include <iostream>
using namespace std;
void swaping(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    swaping(n1, n2);
    cout << n1 << " " << n2 << endl;
}