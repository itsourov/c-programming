#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
vector<int> vt(5);

bool rec(int sum, int count)
{
    if (count == 5)
    {
        return (sum == 23);
    }
    return rec(sum + vt[count], count + 1) || rec(sum - vt[count], count + 1) || rec(sum * vt[count], count + 1);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> vt[0] >> vt[1] >> vt[2] >> vt[3] >> vt[4])
    {
        if (vt[0] == 0 && vt[1] == 0 && vt[2] == 0 && vt[3] == 0 && vt[4] == 0)
            break;

        bool possible = false;
        sort(vt.begin(), vt.end());
        do
        {
            if (rec(vt[0], 1))
            {
                possible = true;
                break;
            }
        } while (next_permutation(vt.begin(), vt.end()));
        if (possible)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
}
