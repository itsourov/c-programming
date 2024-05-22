#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if (n <= 20)
    {
        int fact = 1;
        while (n)
        {
            fact *= n;
            n--;
        }
        cout << fact % 10000 << endl;
    }
    else
    {
        cout << "0000" << endl;
    }
}
