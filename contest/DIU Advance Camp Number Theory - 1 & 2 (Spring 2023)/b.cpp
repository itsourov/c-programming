#include <bits/stdc++.h>
using namespace std;

#define int long long
bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return 2;
    bool temp = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i != 0)
        {
            temp = false;
            break;
        }
    }
    return temp;
}
int getDivCount(int n)
{

    int ans = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int temp = 0;
            while (n % i == 0)
            {
                n /= i;
                temp++;
            }
            ans *= (temp + 1);
        }
    }
    if (n > 1)
    {
        ans *= 2;
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {

        int l, r;
        cin >> l >> r;
        vector<pair<int, int>> vt;
        for (int i = l; i <= r; i++)
        {
            int divCount = getDivCount(i);
            vt.push_back({divCount, i});
        }

        sort(vt.begin(), vt.end());

        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", l, r, vt.back().second, vt.back().first);
    }
}