
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    if (s[0] == 'A' && (s[1] == 'A' || s[1] == 'B') && (s[2] == 'A' || s[2] == 'B' || s[2] == 'C'))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}