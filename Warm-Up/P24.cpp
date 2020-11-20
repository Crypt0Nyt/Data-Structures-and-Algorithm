#include<bits/stdc++.h>
using namespace std;

int productOfDigit(int x);
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Sum is "<<productOfDigit(n);
    return 0;
}
int productOfDigit(int x)
{
    int sum=0, y;
    while(x!=0)
    {
        y = x % 10;
        sum += y;
        x=x/10;
    }
    return sum;
}
