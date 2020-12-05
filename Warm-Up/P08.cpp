//Write a program to find roots of a quadratic equation using switch case.
#include <bits/stdc++.h>
#include <complex.h>

using namespace std;

int main()
{
    int a , b , c , D ;
    float x , y;

    cout<<"Enter the Co-efficients of the Quadratic Equation(ax^2 + bx + c = 0)";
    cout<<"\nEnter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;

    D = (b*b) - 4 * a * c;

    switch(D>0)
    {
        case 1:
            x = (-b + sqrt(D)) / 2 * a;
            y = (-b - sqrt(D)) / 2 * a;
            printf("The Roots of the Quadratic equation are Real adn Distinct: %0.2f , %0.2f", x , y );
            break;

        case 0:
            switch (D<0)
            {
                case 1:
                    x = (-b + sqrt(D)) / 2 * a;
                    y = (-b - sqrt(D)) / 2 * a;
                    printf("Since D<0, Roots of the Quadratic equation are imaginary: %0.2f + %0.2f , %0.2f + %0.2f", creal(x), cimag(x) , creal(y) ,  cimag(y));
                    break;

                case 0:
                    x = y = (-b + sqrt(D)) / 2 * a;

                    printf("The Roots of the Quadratic equation are Real but not distinct: %0.2f , %0.2f", x , y );
                    break;



            }
    }
    return 0;
}
