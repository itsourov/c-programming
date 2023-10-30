#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> marks;
    int q, y;
    string x;
    while (n--)
    {
        cin >> q >> x;

        if (q == 1)
        {
            cin >> y;
            marks[x] += y;
        }
        else if (q == 2)
        {
            marks.erase(x);
        }
        else
        {
            cout << marks[x] << endl;
        }
    }
}
