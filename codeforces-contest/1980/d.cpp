#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{

    // i bad dile i and i-1 tomo gcd value ta change hobe;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int gcdarr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        gcdarr[i] = __gcd(arr[i], arr[i + 1]);
    }
    int noOkCnt = 0;
    for (int i = 1; i < n - 2; i++)
    {
        if (gcdarr[i] >= gcdarr[i - 1])
        {
            // ok
        }
        else
        {
            int skipGcd = __gcd(arr[i], arr[i + 2]);
            if (skipGcd >= gcdarr[i - 1])
            {
                gcdarr[i] = skipGcd;
                gcdarr[i - 1] = skipGcd;
            }
            else
            {
                noOkCnt++;
            }
        }
    }
    if (gcdarr[0] <= gcdarr[1])
    {
        // ok
    }
    else
    {
        noOkCnt++;
    }
    cout << noOkCnt << ' ';
    if (noOkCnt < 2)
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
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}