#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    getchar();
    string s;
    cin >> s;
    int wastedCal = 0;
    for (char c : s)
    {
        wastedCal += a[c - '0' - 1];
    }
    cout << wastedCal << endl;
}