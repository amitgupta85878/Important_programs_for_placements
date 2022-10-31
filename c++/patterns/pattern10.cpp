#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    char ch;
    cin>>n;

    while(i<=n){
        j=i;
        while(j<=n){
            
            cout<< " *";

            j=j+1;
        }
        
        cout<< "\n";
        i=i+1;
    }
}