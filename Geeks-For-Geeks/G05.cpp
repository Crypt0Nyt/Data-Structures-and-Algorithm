//Trailing zeroes in a factorial number

#include <bits/stdc++.h>
using namespace std;


int countTrailingZeros(int n)
{
    int result = 0;

    for(int i=5 ; i<=n ; i*=5)
    {
        result = result + (n/i);
    }
    return result;
}
     
int main()
{
    /* freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);  */
       
        int T;
        cin>>T;
        while(T--)
        {
            int n;
            cin>>n;
            cout<<countTrailingZeros(n)<<endl;
       
        }
        return 0;
}