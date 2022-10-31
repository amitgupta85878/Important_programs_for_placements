#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, ans = 0, i = 0, newans = 0;
    cin >> num;
    while (num != 0)
    {
        int bit = num & 1;
        if(bit==0)
        {
            bit=1;
        }
        else{
            bit=0;
        }
         cout << "rem=" << bit<< endl;
            ans = (bit * pow(2, i)) + ans;
        num = num >> 1;
        i++;
    }
    cout << ans << endl;
    // i = 0;
    // while (ans != 0)
    // {
    //     int rem = ans % 10;
    //     if (rem == 0)
    //     {
    //         rem = 1;
            
    //     }
    //     else
    //     {
    //         rem=0;
    //     }
    //         cout << "rem=" << rem << endl;
    //         newans = (rem * pow(2, i)) + newans;
    //     ans = ans / 10;
    //     i++;
    // }

    // cout << newans << endl;
}