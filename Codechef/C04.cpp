#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);

    long long T, A, B;
    cin >> T;
    while (T--)
    {
        cin>>A>>B;
        long long oddA, evenA, oddB, evenB, result;
        
        evenA = A / 2;
        oddA = (A % 2 == 0) ? (A / 2) : ((A / 2) + 1);

        evenB = B / 2;
        oddB = (B % 2 == 0) ? (B / 2) : ((B / 2) + 1);

        result = oddA * oddB + evenA * evenB;
        cout<<result<<"\n";
    }
    
    return 0;
}