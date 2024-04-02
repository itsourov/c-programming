#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{

    int n;
    cin >> n;
    string teams[n];
    pair<int, int> scores[n];
    for (int tc = 0; tc < n; tc++)
    {
        int p;
        cin >> teams[tc] >> p;
        int arr[6];
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr, arr + 6);
        sum -= arr[0];
        sum -= arr[5];
        sum += (p * 10);
        scores[tc] = {sum, tc * -1};
    }
    sort(scores, scores + n, greater<pair<int, int>>());

    int count = 0;

    for (int i = 0; i < 1000 && i < n; i++)
    {
        if (i == 0)
        {
            cout << teams[abs(scores[i].second)] << " " << scores[i].first << endl;
            count++;
        }
        else
        {
            if (scores[i].first != scores[i - 1].first)
            {
                if (count > 2)
                {
                    break;
                }
            }

            cout << teams[abs(scores[i].second)] << " " << scores[i].first << endl;
            count++;
        }
    }
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
}