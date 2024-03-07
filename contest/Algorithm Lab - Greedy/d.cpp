#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int s, x;
    cin >> s >> x;
    int n = 1;
    int count = 1;
    while (n * x <= s)
    {
        n *= x;
        count++;
    }
    cout << count << endl;
}