//Write a C program to print all odd number between 1 to 100.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i , n = 1;
    cout<<"All the odd numbers from 1 to 100 are:\n";

    while(n<=50)
    {
        i = (2*n-1);
        cout<<i<<"  ";
        n++;
    }

    return 0;
}
