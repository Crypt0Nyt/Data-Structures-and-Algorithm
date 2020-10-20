#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n],i,j;
    cout<<"Enter array values:\n";          //taking the array value 

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])                   //checking if the element in previous index is bigger than the next or not
            {
                int temp=arr[j];                  //swapping
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"After sorting the array:\n";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
