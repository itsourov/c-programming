#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0, input;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            cin >> input;
            if (input == 0)
                count++;
        }
    }

    cout << count << endl;
}