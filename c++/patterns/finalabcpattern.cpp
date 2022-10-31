#include<iostream>
using namespace std;
int main(){
    int col=1,row1,row2,row3=1,n,row4,k,x;
    char ch;
    cout<<"Enter the number:";
    cin>>n;
    while(col<=n){
        row1=1;
        while (row1<=n-col+1)
        { ch='A'+row1-1;
            cout<<" "<<ch;
            row1++;
        }
        row2=col-1;
        while (row2)    
        {
            cout<<"  ";
            row2--;
        }
        row3=col-1;
        while (row3)    
        {
            cout<<"  ";
            row3--;
        }
        row4=n;
        x=col-1;
        while (row4>=col)
        {ch='A'+n-x-1;
            cout<<" "<<ch;
            x++;
            row4--;
        }
        cout<<"\n";
        col++;
    }
}