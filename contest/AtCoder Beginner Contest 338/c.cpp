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
    int ingredenet[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ingredenet[i];
    }
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int maxA = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            maxA = min(maxA, ingredenet[i] / a[i]);
        }
    }

    int maxB = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != 0)
        {
            maxB = min(maxB, ingredenet[i] / b[i]);
        }
    }
    int ans = 0;
    if (maxA >= maxB)
    {

        ans += maxA;
        for (int i = 0; i < n; i++)
        {
            ingredenet[i] -= maxA * a[i];
        }

        maxB = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != 0)
            {
                maxB = min(maxB, ingredenet[i] / b[i]);
            }
        }

        ans += maxB;
        for (int i = 0; i < n; i++)
        {
            ingredenet[i] -= maxB * b[i];
        }
        // cout << "if ";
    }
    else
    {

        // cout << "else " << maxB << " ";
        ans += maxB;

        for (int i = 0; i < n; i++)
        {
            ingredenet[i] -= maxB * b[i];
        }

        maxA = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                maxA = min(maxA, ingredenet[i] / a[i]);
            }
        }

        ans += maxA;
        for (int i = 0; i < n; i++)
        {
            ingredenet[i] -= maxA * a[i];
        }
    }

    cout << ans << endl;
}