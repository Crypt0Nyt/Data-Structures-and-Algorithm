#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ch ;

    cout<<" Enter the number from 1 to 7 of the week days:\n";
    cin>>ch;

    switch(ch)
    {
        case 1:
            cout<<"Monday";
            break;

        case 2:
            cout<<"Tuesday";
            break;

        case 3:
            cout<<"Wednesday";
            break;

        case 4:
            cout<<"Thursday";
            break;

        case 5:
            cout<<"Friday";
            break;

        case 6:
            cout<<"Saturday";
            break;

        case 7:
            cout<<"Sunday";
            break;

        default:
            cout<<"Invalid Coice!";
            break;


    }

    return 0;

}
