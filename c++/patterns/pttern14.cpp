#include<iostream>
using namespace std;
int main(){
    int i=1,j,k,n,x;
    char ch;
    cin>>n;

    while(i<=n){
        int space=n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j =1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        k=i-1;
        while(k)
         {
            cout<<k;
            x++;
            k--;

         }
         
        cout<<"\n";
        i=i+1;
        
    }
}