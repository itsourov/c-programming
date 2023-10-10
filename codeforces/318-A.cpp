#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n, k, res;

    cin >> n >> k;

    if (k <= ceil(n / 2.0))
    {
        res = 2 * k - 1;
    }
    else
    {
        if (n % 2 == 0)
        {
            k -= n / 2;
            res = 2 * k;
        }
        else
        {
            k -= ((n + 1) / 2);
            res = 2 * k;
        }
    }

    cout << res << endl;
}