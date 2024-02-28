#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    vector<string> vt(n);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
        int oneCount = 0;
        for (auto c : vt[i])
        {
            if (c == '1')
                oneCount++;
        }
        if (oneCount > 0)
            st.insert(oneCount);
    }
    if (st.size() == 1)
    {
        cout << "SQUARE" << endl;
    }
    else
    {
        cout << "TRIANGLE" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}