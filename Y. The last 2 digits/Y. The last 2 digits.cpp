# include<iostream>
using namespace std;
int main() {
	int n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;
	int rus = ((n1 % 100) * (n2 % 100) * (n3 % 100) * (n4 % 100))%100; // to get the last 2 digit for each num and * it (%10 give last digit , %100 give last 2 digit)
	if (rus <= 9) { // if rus =9 this mean the f_digit = 0 & s_digit = 9 then it become 09 , 0in the left side so it will not be print the output will be 9 not 09
		cout << "0" << rus << endl; // make 0 as string to print it
	}
	else 
		cout <<rus << endl;


}