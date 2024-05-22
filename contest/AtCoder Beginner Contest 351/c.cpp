#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    stack<int> st;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;

        while (st.size() && st.top() == x)
        {
            x++;
            st.pop();
        }
        st.push(x);
    }
    cout << st.size() << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}