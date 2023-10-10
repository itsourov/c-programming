#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int input, zeroCount = 0, fiveCount = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input == 0)
            zeroCount++;
        else if (input == 5)
            fiveCount++;
    }

    if (zeroCount == 0)
        cout << -1 << endl;
    else if (fiveCount < 9)
        cout << 0 << endl;
    else
    {
        fiveCount -= fiveCount % 9;
        for (int i = 0; i < fiveCount; i++)
            cout << 5;
        for (int i = 0; i < zeroCount; i++)
            cout << 0;
    }
}
