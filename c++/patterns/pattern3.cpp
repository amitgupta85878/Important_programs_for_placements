#include<iostream>
using namespace std;
int main(){
  int i=1,j,n,num=1;
  cin >>n;
  while(i<=n){
    j=1;
    while(j<=n){
        cout<<" "<<num;
        num=num+1;
        j=j+1;
    }
    cout<<"\n";
    i=i+1;
  }
}