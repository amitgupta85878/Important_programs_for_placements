#include<iostream>
using namespace std;
int main(){
    int i=1,j,n,count=1;
    cin>>n;
    while(i<=n){
        j=i;
        while(j>0){
            cout<< " "<<j;
            j=j-1;
        }
        cout<< "\n";
        i=i+1;
    }
}