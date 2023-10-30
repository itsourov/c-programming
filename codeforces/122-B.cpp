#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int isLucky = 1, has4 = 0;
    int foundFirstNumber = 0;
    for (auto c : s)
    {
        if (!foundFirstNumber && c == '0')
            continue;

        if (c != '4' && c != '7')
        {
            foundFirstNumber = 1;
            isLucky = 0;
            break;
        }
        else if (c == '4')
        {
            has4 = 1;
        }
    }

    if (isLucky)
    {
        if (has4)
        {
            cout << 4 << endl;
        }
        else
        {
            cout << 7 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}
