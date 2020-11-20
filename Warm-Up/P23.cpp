#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, i, j, count , x;
    cout << "Enter the integer: ";
    cin >> num;
    for (i = 0; i < 10; i++) 
    {
        count = 0;
        cout << "The frequency of " << i << " = ";
        for (j = num; j > 0; j = j / 10) 
        {
            x = j % 10;
            if (x == i) 
            {
                count++;
            }
        }
        cout << count << endl;
    }
}