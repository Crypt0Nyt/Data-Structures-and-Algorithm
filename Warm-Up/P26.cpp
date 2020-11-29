#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, n, num = 0;
    cout<<"Enter the Number you want to print in words ="; 
    cin>>n;  //3 4 5 6 //
    while(n != 0){
        num = (num*10) + (n % 10);
        n = n / 10;//3 4 5
    }
    for(i=num ; i > 0 ; i/=10){
        switch(i % 10)
        {
            case 0:
            cout<<" Zero ";
            break;

            case 1:
            cout<<" One ";
            break;

            case 2:
            cout<<" TWo ";
            break;

            case 3:
            cout<<" Three ";
            break;

            case 4:
            cout<<" Four ";
            break;

            case 5:
            cout<<" Five ";
            break;

            case 6:
            cout<<" Six ";
            break;

            case 7:
            cout<<" Seven ";
            break;

            case 8:
            cout<<" Eight " ;
            break;

            case 9:
            cout<<" Nine ";
            break;

        }

    }
    cout<<endl;
    return 0;
}
