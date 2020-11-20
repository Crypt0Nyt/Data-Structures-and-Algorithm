#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, n, reverse;
    cout<<"Enter the number = ";
    cin>>n;
    while(n > 0){
        reverse = reverse*10 + (n % 10);
        n = n/10;
        }
        cout<<"Reverse of a number is = "<<reverse;
    return 0;
}
