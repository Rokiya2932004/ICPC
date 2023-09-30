#include <iostream>
#include <iomanip>
using namespace std;
double mean(int n, double arr[])
{
    double sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    double result = sum / n;
    return result;
}
int main()
{
    int n;
    cin >> n;
    double *arr = new double[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    double x = mean(n, arr);
    cout << fixed << setprecision(6) << x << endl;
}