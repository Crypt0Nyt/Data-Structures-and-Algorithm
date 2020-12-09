//write a program to find sum of all odd numbers between 1 to n.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i , n , sum = 0;

    cout<<"Sum of all even numbers from 1 to 100 is =>";

    for(n=0 ; n<50 ; n++)
    {
        i = (2*n);
        sum = sum + i;

    }
    cout<<sum;

    return 0;
}
 
