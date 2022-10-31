#include<iostream>
using namespace std;
int main(){
    int i=1,j,n,value=1;
    char ch;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            ch='A'+value-1;
            cout<< " "<< ch;
            value++;
            j=j+1;
        }
        cout<< "\n";
        i=i+1;
    }
}