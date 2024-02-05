#include <bits/stdc++.h>
#include <deque>
#define int long long
using namespace std;
int n, x;
vector<int> vt;
bool possible = false;
void check(int i, int sum)
{
    if (i == n)
    {
        if (sum == x)
        {
            possible = true;
        }
        return;
    }
    check(i + 1, sum += vt[i]);
    check(i + 1, sum -= vt[i]);
}
signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> x;
    vt.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
    }

    check(1, vt[0]);
    if (possible)
    {

        cout << "YES" << endl;
    }
    else
    {

        cout << "NO" << endl;
    }
}