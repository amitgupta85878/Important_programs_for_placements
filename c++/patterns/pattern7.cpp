#include<iostream>
using namespace std;
int main(){
    int i=1,j,n,count=0;
    char ch;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
            ch='A'+ count;
            cout<< " "<< ch;
            count++;
            j=j+1;
        }
        cout<< "\n";
        i=i+1;
    }
}