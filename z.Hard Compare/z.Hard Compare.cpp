# include <iostream>
# include <math.h>
using namespace std;
int main() {
	double n1, n2;
	double  a, b;
	cin >> n1 >> a >> n2 >> b;
	double x = a*log(n1);
	double y = b*log(n2);
	if (x > y) {
		cout << "YES";
	}
	else 
		cout << "NO";



}