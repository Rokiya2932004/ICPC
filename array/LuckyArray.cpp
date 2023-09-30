#include <iostream>
#include <set>
using namespace std;
int main()
{
    int size;
    cin >> size;
    multiset<int> ms;
    for (size_t i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        ms.insert(num);
    }
    int min = *ms.begin();
    int c = 0;
    for (auto it : ms)
    {
        if (it == min)
        {
            c++;
        }
    }
    c % 2 == 0 ? cout << "Unlucky" : cout << "Lucky";
}








/*int *array = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    sort(array, array + size);
    int  c = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (array[i] != array[i + 1])
        {
            break;
        }
        else
        {
            c++;
            c=1;
        }
    }
    c % 2 == 0 ? cout << "Unlucky" : cout << "Lucky";*/
/*vector<int>v;
    for (size_t i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    sort(array, array + size);
    min = array[0];
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == array[i+1])
        {
           v.push_back(array[i]);
        }
    }
    if (v[min] %2!=0)
    {
       cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }
    */

/*int size, min, c = 0;
    cin >> size;
    map<int, int> m;
    map<int, int>::iterator it;
    int num;
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        m[num]++;
        it = min_element(m.begin(), m.end());
    }
    if (m[it] %2==0)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }*/

/*int *array = new int[size];
    int *freq = new int[10001];
    for (size_t i = 0; i < size; i++)
    {
        cin >> array[i];
        freq[array[i]]++;
    }
    min = array[0];
    for (size_t i = 0; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }

    if (freq[min] % 2 != 0)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }*/
// sort(array, array + size);

/* vector<int> v;
    vector<int>::iterator it = min_element(v.begin(), v.end());
    for (size_t i = 0; i < size; i++)
    {
        cin >> array[i];
        if (array[i] == array[i + 1])
        {
            v.push_back(array[i]);
        }
        min = *it;
    }
    if (min % 2 != 0)
    {
        cout << "Lucky";
    }
    else{
        cout <<"Unlucky" ;
    }*/