//Write a C program to print all alphabets from a to z. - using while loop
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch = 'a' , Ch = 'A';

    cout<<"Alphabets starting from a to z are:\n";

    while (ch<='z')
    {
        cout<<ch<<"  ";
        ch++;
    }

    cout<<"\n";


    while(Ch <= 'Z' )
    {
        cout<<Ch<<"  ";
        Ch++;

    }


    return 0;
}
