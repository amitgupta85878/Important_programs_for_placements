#include<iostream>
using namespace std;
void reverse_arry(int arr[],int size){
    int temp=0,max=size-1;
    for (int i = 0; i <size/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
        max--;
    }
    
}
int main(){
    int arr[100],size;
    cout<<"enter the size of an arry\n";
    cin>>size;
    cout<<"enter the number for input\n";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Given arry is below\n\n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    reverse_arry(arr,size);
    cout<<"\n\n-----Reversed arry is-----\n"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}