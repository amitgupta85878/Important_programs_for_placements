#include<iostream>
using namespace std;
int main(){
    int i=1,j,n,count;
    char ch;
    cin>>n;

    while(i<=n){
        int space=n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int star = 1;
        while (star<=i)
        {
            cout<<"*";
            star++;
        }
        i=i+1;
        cout<<"\n";
        
        
    }
}