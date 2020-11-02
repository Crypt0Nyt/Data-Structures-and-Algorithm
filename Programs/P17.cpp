//Write a program to print multiplication table of any number.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i , num , M ;

    cout<<"Enter the number of whioch you want to print the table:=>";
    cin>>num;
    cout<<"\nThe Multiplication table of "<<num<<" is:\n";

    for(i=1 ; i<=10 ; i++)
    {
        M = i * num ;
        cout<<num<<" x "<<i<<" = "<<M<<endl;
    }

    return 0;
}
