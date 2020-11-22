#include <bits/stdc++.h>
using namespace std;

int adaAndDishes(int arr[],int n){
    sort (arr, arr + n, greater<int>());
    int s1=arr[0],s2=arr[1];
    for (int i = 2; i < n; ++i) {
        if (s1<s2) s1+=arr[i];
        else if(s1>s2) s2+=arr[i];
        else s1+=arr[i];
    }
    return max(s1,s2);
}
int main(){
    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    if(n==0) {
        cout<<"0"<<endl;
        break;
    }
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    if(n==1){
        cout<<arr[0]<<endl;
    }
    else if(n==2){
        cout<<max(arr[0],arr[1])<<endl;
    }
    else {
        cout << adaAndDishes(arr, n)<<endl;
    }
}
    return 0;
}
