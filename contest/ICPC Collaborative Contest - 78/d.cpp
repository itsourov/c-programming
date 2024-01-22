#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> prime_factors;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            // prime_factors.push_back(i);
            while (n % i == 0)
            {

                n /= i;
                prime_factors.push_back(i);
            }
        }
    }
    if (n > 1)
        prime_factors.push_back(n);

    // for (auto item : prime_factors)
    // {
    //     cout << item << " ";
    // }
    cout << prime_factors.size() << endl;
}