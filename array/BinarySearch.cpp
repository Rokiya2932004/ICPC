#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size, quary;
    cin >> size >> quary;
    int *arr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    while (quary--)
    {

        int num, start = 0, end = size - 1;
        cin >> num;
        bool isfound = false;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (arr[mid] == num)
            {
                isfound = true;
                break;
            }
            else if (arr[mid] > num)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        if (isfound)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
}

/*#include <iostream>
#include <set>
using namespace std;
int main()
{
    int size, quary;
    cin >> size >> quary;
    multiset<int> ms;
    int *arr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
       cin >> arr[i];
        ms.insert(arr[i]);
    }

    while (quary--)
    {
        int num, start = 0, end = size - 1, mid = (start + end) / 2;
        cin >> num;
        int res = 0;
        if (arr[mid] == num)
        {
            res = mid;
            end = mid - 1;
        }
        else if (arr[mid] > num)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        cout << res;
    }
}*/
