#include <bits/stdc++.h>
#include <deque>
#define int long long
using namespace std;
int minDiff = INT_MAX;
void check(vector<int> &arr, int i, int sum1, int sum2)
{
    if (i == arr.size())
    {
        minDiff = min(minDiff, abs(sum1 - sum2));
        return;
    }

    check(arr, i + 1, sum1 + arr[i], sum2);
    check(arr, i + 1, sum1, sum2 + arr[i]);
}
signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    check(arr, 0, 0, 0);

    cout << minDiff << endl;
}