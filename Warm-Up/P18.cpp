//Write a program to count number of digits in a number.
#include <bits/stdc++.h>
using namespace std;


int main()

{
    int Count =0 , Num;
    cout<<"Enter the the digits here=>";
    cin>>Num;



    while(Num !=0)
    {
        Num = Num / 10;
        Count ++;
    }
    cout<<"Number of digits are=>"<<Count;

    return 0; 
}











