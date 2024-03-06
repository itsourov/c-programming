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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int dum;
            cin >> dum;
            if (dum == 1)
            {
                cout << j + 1 << " ";
            }
        }
        cout << endl;
    }
}