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
        if (n > 2)
        {
            cout << 98;
            int digit = 9;
            for (int j = 2; j < n; j++)
            {
                cout << digit;
                digit++;
                if (digit == 10)
                {
                    digit = 0;
                }
            }
            cout << endl;
        }
        else if (n == 1)
        {
            cout << 9 << endl;
        }
        else if (n == 2)
        {
            cout << 98 << endl;
        }
    }
}