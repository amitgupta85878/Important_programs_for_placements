#include<iostream>
using namespace std;
int main(){
    int i=1,j,n,count;
    char ch;
    cin>>n;

    while(i<=n){
        j=1;
        while(j<=i){
            ch='A'+ j-i+3;
            cout<< " "<< ch;

            j=j+1;
        }
        
        cout<< "\n";
        i=i+1;
    }
}