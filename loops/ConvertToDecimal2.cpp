
#include <string>
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int test, num;
    cin >> test;
    for (size_t i = 0; i < test; i++)
    {
        cin >> num;
        bitset<32> b(num); //hold a binary representation of a 32-bit integer.
        string BS=b.to_string();
        int countONES=0;
        for (size_t j = 0; j < BS.size(); j++)
        {
            if (BS[j] == '1')
            {
                countONES++;
            }
        }
        string OnesBS(countONES, '1'); // ctreat string have ones digits according to the counter
        int nOnesBS = stoi(OnesBS, 0, 2); // convert the string to int 
        cout << nOnesBS << endl;
    }
}
/* ######## ANOTHER SOLUTION  ###############*/
/*#include <string>
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int test, num;
    cin >> test;
    for (size_t i = 0; i < test; i++)
    {
        cin >> num;
        bitset<32> b(num);
        string BS=b.to_string();
        int countONES=0;
        for (size_t j = 0; j < BS.size(); j++)
        {
            if (BS[j] == '1')
            {
                countONES++;
            }
        }
        string OnesBS(countONES, '1');
      bitset<32> nOnesBS(OnesBS);
       int result = nOnesBS.to_ulong();
        cout << result << endl;
    }
}*/