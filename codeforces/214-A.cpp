#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    int l = max(m, n);
    int count = 0;
    for (int i = 0; i <= l; i++)
    {
        for (int j = 0; j <= l; j++)
        {
            if (i * i + j == n && i + j * j == m)
                count++;
        }
    }

    cout << count << endl;
}