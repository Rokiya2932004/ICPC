#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s); // split the string to words
    string word , revword;
    while (ss >> word) // put the word i had been split in string word
    {
        reverse(word.begin(), word.end()); // reverse the word
        revword += word +" "; // add the word after revers with spaces to string revword
    }
    revword.pop_back(); // remove the last space
    cout << revword<<endl;
    
}