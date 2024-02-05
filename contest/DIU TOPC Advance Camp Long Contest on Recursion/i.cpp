#include <bits/stdc++.h>
#include <deque>
#define int long long
using namespace std;
set<vector<int>> ans;
vector<int> temp;
void subset(vector<int> arr, int i, int sum, const int m)
{
    if (i == arr.size())
    {
        if (sum == m)
        {
            ans.insert(temp);
        }
        return;
    }

    subset(arr, i + 1, sum, m);
    temp.push_back(arr[i]);
    subset(arr, i + 1, sum + arr[i], m);
    temp.pop_back();
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    subset(arr, 0, 0, m);

    for (auto item : ans)
    {

        for (auto num : item)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    if (ans.size() == 0)
    {
        cout << "NONE" << endl;
    }
    cout << endl;
    ans.clear();
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