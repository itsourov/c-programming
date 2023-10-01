#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;

    cin >> s >> t;

    int onIndex = 0;
    for (char c : t)
    {
        if (c == s[onIndex])
            onIndex++;
    }
    cout << onIndex + 1 << endl;
}