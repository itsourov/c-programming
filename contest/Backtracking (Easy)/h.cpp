#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

string rule;
string words[105];
string outputs[300];
void rec(int pos, int n)
{
    if (pos == rule.size())
    {
        for (int i = 0; i < pos; ++i)
            cout << outputs[i];
        cout << '\n';
    }
    else
    {
        if (rule[pos] == '#')
        {
            for (int i = 0; i < n; ++i)
            {
                outputs[pos] = words[i];
                rec(pos + 1, n);
            }
        }
        else
        {
            for (int i = 0; i < 10; ++i)
            {
                outputs[pos] = i + '0';
                rec(pos + 1, n);
            }
        }
    }
}

signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; ++i)
            cin >> words[i];
        cout << "--\n";
        int numRule;
        cin >> numRule;

        while (numRule--)
        {
            cin >> rule;
            rec(0, n);
        }
    }
}