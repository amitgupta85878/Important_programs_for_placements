#include<iostream>
using namespace std;
int main(){
    int i=1,j,n,count,me=1;
    char ch;
    cin>>n;

    while(i<=n){
        int space=i-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int star = n-space;
        while(star>=i){
            count= i+me-1;
            cout<<count;
            me++;
            star--;
        }
        me=1;
        cout<<"\n";
        i=i+1;
        
    }
}