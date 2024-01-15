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
    map<int, int> notes;

    notes[500] = n / 500;
    n %= 500;

    notes[100] = n / 100;
    n %= 100;

    notes[50] = n / 50;
    n %= 50;

    notes[10] = n / 10;
    n %= 10;

    notes[5] = n / 5;
    n %= 5;

    notes[1] = n / 1;
    n %= 1;

    for (auto item : notes)
    {
        for (int i = 0; i < item.second; i++)
        {
            cout << item.first << " ";
        }
    }
    cout << endl;
}