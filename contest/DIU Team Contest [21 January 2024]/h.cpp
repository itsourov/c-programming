#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve()
{
    int k;
    cin >> k;

    map<int, int> fib;
    map<int, vector<int>> check;
    fib[0] = fib[1] = 1;
    int n = 2;
    while (1)
    {
        fib[n] = (fib[n - 1] + fib[n - 2]) % k;
        if (check[fib[n]].empty())
        {
            check[fib[n]].push_back(n);
        }
        else
        {

            cout << check[fib[n]][0] << endl;
            break;
        }

        n++;
        // if (n == 10)
        //     break;
    }

    // for (auto it : fib)
    //     cout << it.first << " - " << it.second << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}