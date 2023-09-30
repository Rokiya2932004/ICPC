#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size, quary;
    cin >> size >> quary;
    vector<long long> arr(size + 1);
    for (int i = 1; i <= size; i++)
    {
        cin >> arr[i]; //6 4 2 7 2 7
    }
    /* Compute the prefix sum for all elements */
    vector<long long> prearr(size + 1);
    prearr[0] = 0; // to make prearr[1] equal arr[0] = the same value
    for (size_t i = 1; i <= size; i++)
    {
        prearr[i] = prearr[i - 1] + arr[i]; // Prefix sum array : 0 6 10 12 19 21 28
    }
    /*  Calculating prifex sum for the quary */
    for (size_t i = 0; i < quary; i++)
    {
        int L, R;
        long long prefix;
        cin >> L >> R;
        prefix=prearr[R] - prearr[L-1]; // Query 1: L = 1, R = 3 ==> prefixSum[R] - prefixSum[L - 1] = prefixSum[3] - prefixSum[0] = 12 - 0 = 12
        cout << prefix <<endl;
    }
}

/*#include <iostream>
using namespace std;
int main()
{
    int size, tests;
    cin >> size >> tests;
    long long *arr = new long long[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int index1, index2;
    for (size_t i = 0; i < tests; i++)
    {
        cin >> index1 >> index2;
        long long sum = 0;
        for (size_t z = index1-1; z < index2; z++) // index1-1 to start from the index before
        {
            sum += arr[z];
        }
        cout << sum << endl;
    }
}*/