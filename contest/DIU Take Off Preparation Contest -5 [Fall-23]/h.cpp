#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p;
    cin >> p;

    int yesCount = 0, input;
    for (int i = 0; i < 3; i++)
    {
        cin >> input;
        if (input == 1)
            yesCount++;
    }

    if (p == 1 || yesCount >= 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}