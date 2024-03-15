#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int alice = arr[0];
    int current = alice;

    if (current > sum / 2)
    {
        cout << 1 << endl;
        cout << 1 << " ";
        return;
    }

    vector<int> ans;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] * 2 <= alice)
        {
            ans.push_back(i + 1);
            current += arr[i];
        }
        if (current > sum / 2)
        {
            cout << ans.size() + 1 << endl;
            cout << 1 << " ";
            for (auto item : ans)
                cout << item << " ";
            cout << endl;
            return;
        }
    }
    cout << 0 << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}