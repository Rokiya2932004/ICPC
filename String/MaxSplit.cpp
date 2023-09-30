#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s, newWord, finalWord[1000 / 2];
    cin >> s; // LLRRLLLRRR
    int cR = 0, cL = 0, indexFinalWord = 0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            cL++;
            newWord += 'L'; // newword[LL], second time --> newword[LLL]
        }
        else
        {
            cR++;
            newWord += 'R';//newword[LLRR] , second time --> newword[LLLRRR]
        }
        if (cR == cL) //2=2 ,second time --> 3=3
        {
            finalWord[indexFinalWord] = newWord;//finalWord[0]= LLRR , second time --> finalWord[1]= LLLRRR
            newWord = ""; // make the string empty
            indexFinalWord++;
        }
    }
    cout << indexFinalWord << endl;
    for (size_t i = 0; i < indexFinalWord; i++)
    {
        cout << finalWord[i] << endl;
    }
}