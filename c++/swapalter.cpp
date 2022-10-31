#include<iostream>
using namespace std;
void swap_arry(int arr[],int size){
    int temp=0;
    for (int i = 0; i <size-1; i+=2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
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
    swap_arry(arr,size);
    cout<<"\n\n-----aternative swapped arry is-----\n"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}