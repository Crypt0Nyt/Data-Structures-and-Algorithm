//Write a program to create Simple Calculator using switch case.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a , b , c;
    char ch;


    cout<<"Enter the first number:";
    cin>>a;

    cout<<"Enter the operator\n + \n - \n * \n / \n=>";
    cin>>ch;

    switch(ch)
    {
        case '+':
            cout<<"Enter the second number:";
            cin>>b;
            c = a+b;
            printf("%0.3f",c);
            break;

        case '-':
            cout<<"Enter the second number:";
            cin>>b;
            c = a-b;
            printf("%0.3f",c);
            break;

        case '*':
            cout<<"Enter the second number:";
            cin>>b;
            c=a*b;
            printf("%0.3f",c);
            break;

        case '/':
            cout<<"Enter the second number:";
            cin>>b;
            c = a/b;
            printf("%0.3f",c);
            break;

        default : 
            cout<<":( Invalid Choice!!, You have to select operator from above!";

    }


    return 0;
}
