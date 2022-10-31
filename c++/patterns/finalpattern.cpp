#include<iostream>
using namespace std;
int main(){
    int col=1,row1,row2,row3=1,row4,k,x,n=5;
    while(col<=n){
        row1=1;
        while (row1<=n-col+1)
        {
            cout<<row1;
            row1++;
        }
        row2=col-1;
        while (row2)    
        {
            cout<<" ";
            row2--;
        }
        row3=col-1;
        while (row3)    
        {
            cout<<" ";
            row3--;
        }
        
        row4=n;
        x=col-1;
        while (row4>=col)
        {
            cout<<n-x;
            x++;
            row4--;
        }
        cout<<"\n";
        col++;
    }
}