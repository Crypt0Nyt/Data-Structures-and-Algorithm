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


    cout<<"The First term is ="<<first<<endl<<"and the last term of the number is ="<<last;   
    return 0;
}
 
