#include<bits/stdc++.h>
using namespace std;

int productOfDigit(int x);
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Product is "<<productOfDigit(num);
    return 0;
}
int productOfDigit(int x)
{
    int product=1, y;
    while(x!=0)
    {
        y = x % 10;
        product *= y;
        x=x/10;
    }
    return product;
}
