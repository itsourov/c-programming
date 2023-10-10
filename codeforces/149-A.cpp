#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    vector<int> month(12);
    for (int i = 0; i < 12; i++)
    {
        cin >> month[i];
    }
    sort(month.begin(), month.end(), greater<int>());

    int h = 0;
    int i;
    for (i = 0; i < 12; i++)
    {
        if (h >= k)
            break;
        h += month[i];
    }
    if (h >= k)
    {
        cout << i << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}