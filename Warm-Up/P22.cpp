#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, n, reverse, num;
    cout<<"Enter the number = ";
    cin>>n;
    num=n;
    while(n > 0){
        reverse = reverse*10 + (n % 10);
        n = n/10;
        }
         if(reverse==num) cout<<"The number is Palindrome ";
         else cout<<"The number is Not Palindrome";
       return 0;
}
