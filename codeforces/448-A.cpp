#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1, a2, a3;
    int b1, b2, b3;
    int n;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    int totalShellNeed = ceil((a1 + a2 + a3) / 5.0);
    totalShellNeed += ceil((b1 + b2 + b3) / 10.0);
    if (totalShellNeed <= n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}