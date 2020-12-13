#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int T;
    cin>>T;
    while(T--)
    {
        int i, N, D;
        float risk = 0, ntrisk = 0, days;
        cin>>N >>D;
        int arr[N];
        for(i=0 ; i<N ; i++) cin>>arr[i];
        
        for(i=0 ; i<N ; i++){
        if(((arr[i]<=9) && (arr[i]>=1)) || ((arr[i]>=80) && (arr[i]<=100))) risk++;
        else if(arr[i]<80 && arr[i]>9) ntrisk++; 
        }
        days = ceil(risk/D) + ceil(ntrisk/D);  
        cout<<days<<"\n";
    }
    return 0;
}