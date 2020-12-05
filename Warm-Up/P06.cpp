//Write a program to  whether a number is positive, negative or zero using switch case.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number you want to :";
    cin>>num;

    switch (num > 0)
    {
        case 1:
            cout<<"The number is positive";
            break;

        case 0:
            switch (num < 0)
            {
                case 0:
                    cout<<"You have entered Zero";
                    break;

                case 1:
                    cout<<"The number is negetive";
                    break;
            }
    }
 

    return 0;
}
