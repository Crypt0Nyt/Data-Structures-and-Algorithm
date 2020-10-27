#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x ;
    cout<<"Enter the first Number:";
    cin>>x;

    switch(x % 2==0)
    {
        case 0:
            cout<<"Number is odd";
            break;

        case 1:
            cout<<"Number is even";
            break;

        default:
            cout<<"Neither even nor odd";

    }
    return 0;
}
