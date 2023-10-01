#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> bulbs(n, -1);

    int pressedSwitch;
    for (int i = 0; i < m; i++)
    {
        cin >> pressedSwitch;
        for (int j = pressedSwitch - 1; j < n; j++)
        {
            if (bulbs[j] == -1)
            {
                bulbs[j] = pressedSwitch;
            }
        }
    }
    for (auto bulb : bulbs)
    {
        cout << bulb << " ";
    }
    cout << endl;
}