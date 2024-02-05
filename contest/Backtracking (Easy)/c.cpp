#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<string> ans;
void rec(string &st, int n, int arr[], int k)
{
    if (ans.size() == k)
    {
        return;
    }
    if (st.size() == n)
    {
        ans.push_back(st);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            st.push_back('A' + i);
            arr[i] = 1;
            rec(st, n, arr, k);
            st.pop_back();
            arr[i] = 0;
        }
    }
}

void solve(int i)
{
    cout << "Case " << i << ":" << endl;
    int n, k;
    cin >> n >> k;
    string st;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    rec(st, n, arr, k);
    for (auto item : ans)
    {
        cout << item << endl;
    }
    ans.clear();
}
signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;

    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        solve(i);
        if (i != t)
        {
            cout << endl;
        }
    }
}