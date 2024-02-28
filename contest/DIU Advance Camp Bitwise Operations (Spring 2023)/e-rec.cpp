#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;
int arr[20];
bool rec(int index, int sum)
{
    if (index == n)
    {
        if (sum == 0 || sum % 360 == 0)
            return true;
        return false;
    }

    return rec(index + 1, sum + arr[index]) || rec(index + 1, sum - arr[index]);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (rec(1, arr[0]))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}