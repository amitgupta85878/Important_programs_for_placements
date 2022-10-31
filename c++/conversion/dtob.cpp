#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,ans=0,i=0;
    cin>>num;
    while (num!=0)
    {
        int bit = num&1;
        ans=(bit * pow(10,i))+ans;
        num=num>>1;
        i++;
    }
    cout<<ans<<endl;
    
}