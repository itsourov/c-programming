#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> b(k);
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
    }

    if (k > 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            int elem = a[i];
            int prev = a[i - 1];
            if (elem == 0)
            {
                elem = b[0];
            }
            if (prev == 0)
            {
                prev = b[0];
            }

            if (elem < prev)
            {
                // cout << elem << " " << prev << endl;
                cout << "Yes" << endl;
                return 0;
            }
        }
        cout << "No" << endl;
    }
}