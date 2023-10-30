#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, y, s;
    cin >> x >> y >> s;
    x = abs(x);
    y = abs(y);
    if (x + y == s)
    {
        cout << "Yes" << endl;
    }

    else if (x + y < s && (s - (x + y)) % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}