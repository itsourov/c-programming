
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int sz = unique(v.begin(), v.end()) - v.begin();

    if (sz % 2 == 0)
    {
        cout << sz - 1 << endl;
    }
    else
    {
        cout << sz << endl;
    }
}