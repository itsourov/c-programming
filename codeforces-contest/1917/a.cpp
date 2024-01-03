#include <bits/stdc++.h>
using namespace std;

#define int long long
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    bool hasZero = false;
    bool hasNeg = false;
    int negCount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            hasZero = true;
        if (arr[i] < 0)
        {

            hasNeg = true;
            negCount++;
        }
    }

    if (hasZero)
    {
        cout << 0 << endl;
    }
    else
    {

        if (hasNeg && negCount % 2 == 1)
        {
            cout << 0 << endl;
        }
        else if (hasNeg && negCount % 2 == 0)
        {
            cout << 1 << endl;
            int *min = min_element(arr, arr + n);

            cout << min - arr + 1 << " " << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
    }
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