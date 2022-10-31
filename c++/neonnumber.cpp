#include<iostream>
using namespace std;
int main(){
    int num1,sqr,sum=0;
    cout<<"Enter the numbers\n";
    cin>>num1 ;
    sqr=num1*num1;
    while (sqr!=0)
    {
       int  rem=sqr%10;
        sqr=sqr/10;
        sum=sum+rem;
    }
    if (num1==sum)   
    {
        cout<<"Neon number "<<num1;
    }
    else{
        cout<<"Not a neon number "<<num1;
    }
      
}