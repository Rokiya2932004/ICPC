#include <iostream>
using namespace std;
int main()
{
	int l1, r1, l2, r2; // l1 , r1 the left & right side for first interval
	cin >> l1 >> r1 >> l2 >> r2;
	int start, end; // for the output

		if (l1 < l2) {
			start = l2;
		}
		else
			start = l1;
		if (r1 < r2) {
			end = r1;
		}
		else
			end = r2;
		cout << start << " " << end << endl;

		if ((l1 > l2 && l1 > r2) || (l2 > r1 && r2 > r1)) {
			cout << -1 << endl;
}}