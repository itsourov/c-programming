#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, d;
    cin >> a >> b >> d;

    for (int i = a; i <= b; i += d)
    {
        cout << i << " ";
    }
    cout << endl;
}