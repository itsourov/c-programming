#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int newArr[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                cnt++;
            }
            newArr[i] = cnt;

            // cout << newArr[i] << " ";
        }
        // cout << endl;

        int q;
        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;

            l--;
            r--;

            if (newArr[r] - newArr[l] > 0)
            {
                cout << "EVEN" << endl;
            }
            else if (newArr[r] - newArr[l] == 0 && l - 1 >= 0)
            {
                if (newArr[l] - newArr[l - 1] > 0)
                {
                    cout << "EVEN" << endl;
                }
                else
                {
                    cout << "ODD" << endl;
                }
            }
            else
            {
                cout << "ODD" << endl;
            }
        }
    }
}