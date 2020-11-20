//Write a program to find maximum between two numbers using switch case.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a  , b ;
    cout<<"Enter the first Numbers:";
    cin>>a;
    cout<<"Enter the second Number:";
    cin>>b;

    switch(a < b)
    {
        case 0:
            cout<<"Maximum number is:"<<a;
            break;

        case 1:
            cout<<"Maximum number is:"<<b;
            break;

        default:
            cout<<"Both are equal!!!";

    }
    return 0;
}
