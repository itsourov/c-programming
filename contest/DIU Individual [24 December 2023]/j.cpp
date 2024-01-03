#include <bits/stdc++.h>
using namespace std;

#define int long long

int phi(int n)
{
    int result = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 1)
        {
            arr[b - 1] = c;
        }
        if (a == 2)
        {
            int sum = 0;
            for (int i = b - 1; i < c; i++)
            {
                sum += phi(arr[i]);
            }
            cout << sum << endl;
        }
    }
}