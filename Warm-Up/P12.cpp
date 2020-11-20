//Write a C program to print all even numbers between 1 to 100. - using while loop
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i , n = 1;
    cout<<"Even numbers from 1 to 100 are:\n";



    while(n<=50)
    {
        i = 2*n;
        cout<<i<<"  ";
        n++;


    }
    return 0;

}