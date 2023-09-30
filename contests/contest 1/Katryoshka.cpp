#include <iostream>
#include <cmath>
using namespace std;
int main(){
long long eye , mouth , body;
int res;
cin >> eye >> mouth >> body;
if(eye == 0 || body == 0){
    cout << 0 << endl;}
    else {
res = max((floor(eye/2), floor((eye-mouth)/2), min(eye, mouth, body)));

    }

    return 0;




}