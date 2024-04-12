#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    string s;
    getline(cin, s);

    if (s.back() == '?')
    {
        cout << 7 << endl;
    }
    else
    {
        // cout << "asd" << endl;

        stringstream ss(s);
        string item;
        while (getline(ss, item, ' '))
        {
            if (item.back() > 'z' || item.back() < 'a')
            {
                item.pop_back();
            }
            if (item == "Sussu")
            {
                cout << "AI SUSSU!" << endl;
                return;
            }
        }

        cout << "O cara é bom!" << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
    return 0;
}
