#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int t;
    cin >> t;
    queue<int> q;
    for (int i = 0; i < t; i++)
    {

        int n, ID;
        cin >> n >> ID;
        if (n == 1)
        {
            q.push(ID);
        }
        else
        {
            if (!q.empty() && q.front() == ID)
            {

                cout << "Yes\n";
                q.pop();
            }
            else
            {
                cout << "No\n";
                q.pop();
            }
        }
    }
}