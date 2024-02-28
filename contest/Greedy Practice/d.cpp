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
    sort(arr, arr + n, greater<int>());
    int count = 0;
    int threeCount = 0;
    int twoCount = 0;
    int oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 4)
        {
            count++;
        }
        else if (arr[i] == 3)
        {
            threeCount++;
        }
        else if (arr[i] == 2)
        {
            twoCount++;
        }

        else if (arr[i] == 1)
        {
            oneCount++;
        }
    }

    int minOfOneThree = min(oneCount, threeCount);
    count += minOfOneThree;
    oneCount -= minOfOneThree;
    threeCount -= minOfOneThree;
    count += threeCount;
    threeCount = 0;

    count += twoCount / 2;
    twoCount %= 2;

    int baki = oneCount + twoCount;
    count += baki / 4;
    if (baki % 4 != 0)
    {
        count++;
    }
    cout << count << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}