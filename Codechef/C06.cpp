#include <bits/stdc++.h>
using namespace std;

int main()
{
   //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);

    int D1, V1, D2, V2, P;
    cin >> D1 >> V1 >> D2 >> V2 >> P;
    int  firstDay;
    float vaccine, finalCount, x1;
     
    int diff = abs(D1 - D2);
    int smaller = (D1 < D2) ? D1 : D2;

    vaccine = (D1 > D2) ? (P - ((D1 - D2) * V2)) : (P - ((D2 - D1) * V1));
    firstDay = (D1 > D2) ? D1 : D2;
    finalCount = ceil((vaccine / (V1 + V2)) + firstDay - 1);

    if(smaller == D1) 
    {
        int x = diff * V1;
        x1 = (x > P) ? ((P*1.0) / V1) + smaller - 1 : finalCount;
    }
    else
    {
        int x = diff * V2;
        x1 = (x > P) ? ((P*1.0) / V2) + smaller - 1 : finalCount;
    }
    
    cout << ceil(x1) << endl;
    return 0;
}