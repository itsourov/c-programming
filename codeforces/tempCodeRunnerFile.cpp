#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int isOk = 1;
    for (auto c : s)
    {
        if (c != '4' && c != '7')
        {
            isOk = 0;
            break;
        }
    }
    if (isOk)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
