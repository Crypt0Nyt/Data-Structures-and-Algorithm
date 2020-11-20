//Write a C++ program to print all natural numbers from 1 to n. - using while loop

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , i = 1;
    cout<<"Enter the number till you want to print the numbers:";
    cin>>n;

    while(i<=n)
    {
        cout<<i<<"  ";
        i++;
    }

    return 0;
}
