//Write a program to check whether an alphabet is vowel or consonant using switch case.
#include <bits/stdc++.h>

using namespace std;


int main()
{
    char ch;

    cout<<"Enter the character you want(a-z):";
    cin>>ch;

    switch(ch)
    {
        case 'a':
            cout<<"vovel";
            break;

        case 'A':
            cout<<"vovel";
            break;

        case 'e':
            cout<<"vovel";
            break;

        case 'E':
            cout<<"vovel";
            break;

        case 'o':
            cout<<"vovel";
            break;

        case 'O':
            cout<<"vovel";
            break;

        case 'u':
            cout<<"vovel";
            break;

        case 'U':
            cout<<"vovel";
            break;

        default:
            cout<<"consonant";
          


    }

    return 0;
}
