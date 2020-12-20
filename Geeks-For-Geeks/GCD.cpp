#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    if(b==0) return a;
    return GCD(b, a % b);
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
     int T;
        cin>>T;
        while(T--)
        {
            int a, b;
            cin>>a>>b;
            cout<<GCD(a,b)<<endl;
        }

    return 0;
}