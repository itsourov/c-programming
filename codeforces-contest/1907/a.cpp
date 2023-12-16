// Halloumi Boxes
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        char column = s[0];
        int row = s[1] - '0';

        for (char c = 'a'; c <= 'h'; ++c)
        {
            if (c != column)
            {
                cout << c << row << "\n";
            }
        }

        for (int r = 1; r <= 8; ++r)
        {
            if (r != row)
            {
                cout << column << r << "\n";
            }
        }
    }
}