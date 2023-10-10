#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> price(n);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    sort(price.begin(), price.end());

    int earning = 0;
    for (int i = 0; i < m; i++)
    {
        if (price[i] <= 0)
        {

            earning += price[i];
        }
    }

    cout << earning * (-1) << endl;
}