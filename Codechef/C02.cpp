#include<bits/stdc++.h>
using namespace std;

void solve()
{    
    string a, b;
    cin>>a>>b;

    int n=a.length();
    int ans=0;
    for (int i = 0; i < n; i+=2)
    {
        if (a[i] != b[i])
        {
            while(a[i] != b[i] && i < n)    i += 2;
            ans++;
        }    
    }
    for (int i = 1; i < n; i+=2)
    {
        if(a[i] != b[i])
        {
            while(a[i] != b[i] && i < n)    i += 2;
            ans++;
        }    
    }
    cout<<ans<<endl;
    return ;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//afreopen("output.txt","w",stdout);
    
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}


