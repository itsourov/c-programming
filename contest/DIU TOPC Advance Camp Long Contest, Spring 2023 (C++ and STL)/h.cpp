#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<pair<int, int>, string> codes;
    int a, b;
    string s;
    while (n--)
    {
        cin >> a >> b >> s;
        codes[{a, b}] = s;
    }

    int q;
    cin >> q;
    while (q--)
    {
        cin >> a >> b;
        cout << codes[{a, b}] << endl;
    }
}
