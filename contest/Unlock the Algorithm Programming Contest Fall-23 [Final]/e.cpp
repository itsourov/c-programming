#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, m, n;
    cin >> x >> m >> n;
    vector<int> a(m), b(n);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());
    int count = 0, total = 0;
    int wc = 0, bc = 0;
    while (1)
    {
        if (wc == bc)
        {
            int temp1, temp2;
            if (a.empty())
            {
                temp1 = 2000;
            }
            else
            {
                temp1 = a.back();
            }

            if (b.empty())
            {
                temp2 = 2000;
            }
            else
            {
                temp2 = b.back();
            }

            if (temp1 < temp2)
            {
                total += temp1;

                if (total > x)
                {
                    cout << count << endl;
                    return 0;
                }
                count++;
                wc++;

                a.pop_back();
            }
            else
            {
                total += temp2;

                if (total > x)
                {
                    cout << count << endl;
                    return 0;
                }
                count++;
                bc++;

                b.pop_back();
            }
        }
        else if (wc < bc)
        {

            if (a.empty())
            {
                cout << count << endl;
                return 0;
            }
            total += a.back();
            if (total > x)
            {
                cout << count << endl;
                return 0;
            }
            count++;
            wc++;
            a.pop_back();
        }
        else
        {

            if (b.empty())
            {
                cout << count << endl;
                return 0;
            }
            total += b.back();
            if (total > x)
            {
                cout << count << endl;
                return 0;
            }
            count++;
            bc++;
            b.pop_back();
        }
    }
}