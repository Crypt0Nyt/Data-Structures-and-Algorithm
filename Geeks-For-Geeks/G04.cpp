//Kth greatest/shortest element in the array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); */
    
    
    int T;
        cin>>T;
        while(T--)
        {
            int N;
            cin>>N;
            
            int arr[N];
            for(int i=0 ; i<N ; i++)
            {
                cin>>arr[i];
            }
            int k;
            cin>>k;

            sort(arr, arr + N);
            cout<<endl<<arr[k-1]<<endl;

        }
    return 0;
}



/* 2
6
7 10 4 3 20 15
3
5
7 10 4 20 15
4
 */

