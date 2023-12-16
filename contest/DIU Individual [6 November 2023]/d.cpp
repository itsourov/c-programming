
#include <bits/stdc++.h>
using namespace std;
// #define int long long

const int N = 10e5;
int arr[N];
int n;

int doWork(int l, int r)
{

    // printf("removing from %d to %d\n", l, r);
    for (int i = l; i <= r; i++)
    {
        arr[i] = 0;
    }

    int max = max_element(arr, arr + n) - arr;

    if (max == 0)
        return 1;
    else
    {
        return min(doWork(0, max), doWork(max, n)) + 1;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max = max_element(arr, arr + n) - arr;
        cout << min(doWork(0, max), doWork(max, n)) + 1 << endl;
    }
}