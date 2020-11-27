#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a[100], N, i, f=0, j, dis=0;
    cin>> N;
    for(i=0 ; i<N ; i++){
        cin>>a[i];
    }
    f = a[0];
    for(j=1 ; j<N ; j++){
        if(f>=1){
            dis++;
            f--;
            f = f + a[j];
        }
        else 
        break;
    }
    dis+=f;
    cout<<dis<<"\n";
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}
