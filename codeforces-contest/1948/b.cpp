#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool good = true;
    int a = 0, b = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] >= 10)
            {
                a = arr[i] / 10;
                b = arr[i] % 10;
                if (a > b || b > arr[i + 1])
                {
                    good = false;
                    break;
                }
                else
                {

                    arr[i] = a;
                }
            }
            else
            {
                good = false;
                break;
            }
        }
    }
    if (good)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}