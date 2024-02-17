#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<vector<int>> ans;
void rec(int arr[], int n, vector<int> &vt, int count, int index)
{

    if (vt.size() == 6)
    {
        ans.push_back(vt);
        return;
    }
    if (index == n)
    {
        return;
    }
    vt.push_back(arr[index]);
    rec(arr, n, vt, count + 1, index + 1);
    vt.pop_back();
    rec(arr, n, vt, count, index + 1);
}
signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;

    int n;
    bool first = true;
    while (cin >> n && n != 0)
    {
        if (!first)
        {
            cout << endl;
        }
        first = false;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> vt;
        rec(arr, n, vt, 0, 0);
        for (auto item : ans)
        {
            bool f = true;
            for (auto num : item)
            {
                if (f)
                {
                    cout << num;
                }
                else
                {
                    cout << " " << num;
                }
                f = false;
            }

            cout << endl;
        }
        ans.clear();
    }
}