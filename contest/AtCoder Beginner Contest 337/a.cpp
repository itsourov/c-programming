#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int suma = 0, sumb = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        suma += a;
        sumb += b;
    }
    if (suma == sumb)
    {
        cout << "Draw" << endl;
    }
    else if (suma > sumb)
    {
        cout << "Takahashi" << endl;
    }
    else
    {
        cout << "Aoki" << endl;
    }
}