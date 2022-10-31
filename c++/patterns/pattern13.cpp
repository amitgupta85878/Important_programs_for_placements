#include<iostream>
using namespace std;
int main(){
    int i=1,j,n,count=1;
    char ch;
    cin>>n;

    while(i<=n){
        int space=n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int star =1;
        while(star<=i){
            cout<<count;
            count++;
            star++;
        }
        cout<<"\n";
        i=i+1;
        
    }
}