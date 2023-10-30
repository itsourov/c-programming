#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    long long int lastD = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;

    if (lastD <= 24)
    {
        cout << "level " << 0 << endl;
    }
    else if (lastD <= 49)
    {
        cout << "level " << 1 << endl;
    }
    else if (lastD <= 74)
    {
        cout << "level " << 2 << endl;
    }
    else
    {
        cout << "level " << 3 << endl;
    }
}