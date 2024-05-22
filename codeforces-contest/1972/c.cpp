#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k;
bool isPos(int arr[], int mid)
{
    int takaAse = k;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mid)
        {
            takaAse -= mid - arr[i];
            if (takaAse < 0)
            {
                return false;
            }
        }
    }
    return true;
}
void solve()
{

    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0;
    int r = 1;
    while (isPos(arr, r))
    {
        r++;
    }

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (isPos(arr, mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (n == 1)
    {
        cout << r << endl;
    }
    else
    {

        int lagche = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < r)
            {
                lagche += (r - arr[i]);
            }
        }
        int k_baki = k - lagche;
        int extra = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > r)
            {
                extra++;
                continue;
            }
            else
            {
                if (k_baki > 0)
                {
                    extra++;
                    k_baki--;
                }
            }
        }
        cout << (n * (r - 1)) + extra + 1 << endl;
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
    return 0;
}