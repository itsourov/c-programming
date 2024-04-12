#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
void solve()
{

    priority_queue<int> young;
    priority_queue<int, vector<int>, greater<int>> old;

    map<int, int> mp;

    int n;
    cin >> n;
    int a, b;
    int yCnt = 0, oCnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        mp[a] = b;

        if (young.size() == old.size())
        {
            young.push(a);
            yCnt += b;
        }
        else
        {

            old.push(a);
            oCnt += b;
        }

        while (!old.empty() && young.top() > old.top())
        {
            int yountTop = young.top();
            int oldTop = old.top();

            young.pop();
            yCnt -= mp[yountTop];

            old.pop();
            oCnt -= mp[oldTop];

            young.push(oldTop);
            yCnt += mp[oldTop];

            old.push(yountTop);
            oCnt += mp[yountTop];
        }

        cout << abs(yCnt - oCnt) << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //    cin>>t;
    while (t--)
    {
        solve();
    }
}