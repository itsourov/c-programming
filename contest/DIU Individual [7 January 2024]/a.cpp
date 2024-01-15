#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, vector<pair<int, int>>> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (mp[arr[i] + arr[j]].size() != 0)
                {
                    for (auto item : mp[arr[i] + arr[j]])
                    {
                        if (item.first != i && item.first != j && item.second != i && item.second != j)
                        {
                            cout << "YES" << endl;
                            cout << i + 1 << " " << j + 1 << " " << item.first + 1 << " " << item.second + 1 << endl;

                            return 0;
                        }
                    }
                }
                else
                {
                    mp[arr[i] + arr[j]].push_back(make_pair(i, j));
                }
            }
        }
    }

    cout << "NO" << endl;
}