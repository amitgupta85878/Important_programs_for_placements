#include <iostream>
using namespace std;
int findmax(int arr[], int size)
{
    int max = arr[0];
    
    for (int i = 1; i < size - 1; i++)
    { if (arr[i]>max)
    {           
        max=arr[i];
    }
    
        
        for (int j = 2; j < size; j++)
        {
            if (max <= arr[j])
            {
                max = arr[j];
            }
        }
    }
    return max;
}
int findmin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size-1; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
        for (int j = 2; j < size; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
            }
        }
    }
    return min;
}

int main()
{
    int arr[100], size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = findmax(arr, size);
    int min = findmin(arr, size);
    cout << "max= " << max << "\nmin=" << min;
    return 0;
}