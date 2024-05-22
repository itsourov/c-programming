#include <iostream>
using namespace std;

bool intersect(int a, int b, int c, int d)
{
    // Check if the strings intersect
    if ((a < c && b > c) || (a > c && a < d))
    {
        return true;
    }
    return false;
}

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (intersect(a, b, c, d))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
