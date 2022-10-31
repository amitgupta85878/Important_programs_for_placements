#include<iostream>
using namespace std;
int main(){
    int firstnumdiv=0,num1,num2,secondnumdiv=0;
    cout<<"Enter the numbers\n";
    cin>>num1 >> num2;
    for (int i = 1; i < num1; i++)
    {
        if(num1%i==0){
            firstnumdiv=firstnumdiv+i;
        }
    }
    for (int j = 1; j < num2; j++)
    {
        if(num2%j==0){
            secondnumdiv=secondnumdiv+j;
        }
    }

    if (secondnumdiv==num1&&firstnumdiv==num2)
    {
        cout<<"amicable number "<<num1<<" "<<num2;
    }
    else{
        cout<<"not amicable number "<<num1<<" "<<num2;

    }
    
    
}