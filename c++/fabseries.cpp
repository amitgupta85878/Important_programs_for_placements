#include <iostream>
using namespace std;
int main()
{
    int n, num1 = 0, num2 = 1, num3;
    cout << "Enter the num" << endl;
    cin >> n;
    if (n > 0)
    {
        cout << num1 << " " << num2;
        for (int i = 1; i <= n; i++)
        {
            num3 = num1 + num2;
            cout << " " << num3;
            num1 = num2;
            num2 = num3;
        }
    }
    else{
        cout<<"Enter a valid number";
    }
}