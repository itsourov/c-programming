#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;

        int aPos = 0;
        int bPos = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == a)
            {
                aPos = i;
            }
            if (arr[i] == b)
            {
                bPos = i;
            }
        }
        int index = min(aPos, bPos);
        cout << arr[index] << endl;
    }
}