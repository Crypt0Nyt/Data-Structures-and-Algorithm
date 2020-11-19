#include<bits/stdc++.h>
using namespace std;

int main()
{
    int last, first, n;

    cout<<"Enter the number=>";
    cin>>n;

    last = n % 10;

    while(n >= 10){
        n = n/10;
    }

    first = n;


    cout<<"The sum of fisrt and last term is ="<<first+last;   
    return 0;
}
