#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
    }
    for (int i = 0; i < n; i++)
    {
        cout << i % 2;
    }
    cout << endl;
}