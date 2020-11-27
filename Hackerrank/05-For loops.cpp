#include <bits/stdc++.h>

using namespace std;



int main() {
    int n1, n2, i;
    string array[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> n1;
    cin >> n2;

    for (i = n1; i <= n2; i++)
    {
        if (i <= 9)
        {
            cout << array[i - 1] << endl;
        }
        else if (i % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
            {
            cout << "odd"<<endl;
        }

    }
    return 0;
}
