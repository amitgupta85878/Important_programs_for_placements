#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<< i;
            j=j+1;
        }
        cout<< "\n";
        i=i+1;
    }
}