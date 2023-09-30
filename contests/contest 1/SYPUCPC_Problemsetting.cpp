#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int* arr = new int[n]; // Allocate memory for the array

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        int min = arr[0]; // Initialize min with the first difficulty

        for (int j = 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
            }
        }

        cout << min << endl;

       delete[] arr; // Deallocate memory for the array
    }

    return 0;
}