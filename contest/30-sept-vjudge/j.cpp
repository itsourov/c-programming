#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, sum;
    for (int j = 1; j <= t; j++)
    {
        cin >> a >> b;
        sum = 0;
        for (int i = a; i <= b; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << "Case " << j << ": " << sum << endl;
    }
}