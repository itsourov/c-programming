#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 10e6;
int divCount[N + 1];
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 2; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            divCount[j]++;
        }
    }

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;

        cout << divCount[x] + 1 << endl;
    }
}