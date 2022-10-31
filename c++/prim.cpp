#include <iostream>
using namespace std;
int main()
{
    int n;
    bool isprime = 1;
    cout << "Enter the num" << endl;
    cin >> n;
    if (n > 0)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << n << " is not a prime number" << endl;
                isprime = 0;
                break;
            }
        }
        if (isprime)
        {
            cout << n << " is prime number";
        }
    }
    else{
        cout<<"Enter a valid number";
    }
}