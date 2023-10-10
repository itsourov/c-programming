#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // cin >> n;
    n = 5;

    for (int i = -n; i <= n; i++)
    {
        for (int j = n - abs(i); j <= n; j++)
        {
            int number = n - abs(j);
            cout << number << " ";
        }
        cout << "\n";
    }
}