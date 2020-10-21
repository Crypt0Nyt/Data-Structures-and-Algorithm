#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int i , j , n , temp;

    cout<<"Enter the number of elements:";
    cin>>n;

    cout<<"Enter the elements of array"<<endl;
    for(i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    j=i-1;
    for(i=0 ; i < j ; i++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }

    cout<<"Reverse of the array is:"<<endl;
    for(i=0 ; i<n ; i++)
    {
        cout<<"\t"<<arr[i];
    }

    return 0;
}

