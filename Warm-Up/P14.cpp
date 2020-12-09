//Write a program to find sum of all natural numbers between 1 to n.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i , sum = 0;

    cout<<"Sum of all natural numbers from 1 to 100 are => ";

    for(i=1 ; i <= 100 ; i++)
    {
        sum = sum + i;
    }
    cout<<sum;

    return 0;
}


 
