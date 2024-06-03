#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, m;
int total;
const int MAX = 200000 + 100;
int pskil[MAX];
int tskil[MAX];
int dp1[MAX][2];
int dp2[MAX][2];
int rec(int i, int c1, int c2)
{
    int nanile = rec(i + 1, c1, c2);
}

void solve()
{

    cin >> n >> m;
    total = n + m;

    for (int i = 0; i < total; i++)
    {
        cin >> pskil[i];
        cin >> tskil[i];
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >>
        t;
    while (t--)
    {
        solve();
    }
    return 0;
}