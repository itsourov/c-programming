#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int coke = 1;

    int count = 1;
    while (1)
    {
        if (count * 3 > n + 1)
            break;
        coke += count * 3;
        count++;
    }
    cout << coke << endl;
}