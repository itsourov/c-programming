#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int digit = 9;
        for (int j = 0; j < n; j++)
        {
            cout << digit;
            digit--;
            if (digit == -1)
            {
                digit = 9;
            }
        }
        cout << endl;
    }
}