#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
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
            cout<<i;
            star++;
        }
        cout<<"\n";
        i=i+1;
        
    }
}