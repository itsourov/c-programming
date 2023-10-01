#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, s;
    cin >> n >> s;
    vector<int> mugs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> mugs[i];
    }
    sort(mugs.begin(), mugs.end());

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += mugs[i];
    }
    if (sum <= s)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}