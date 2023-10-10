#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int h, m;
    cin >> h >> m;
    if (h >= x && m >= y)
    {
        cout << "He is the thief!" << endl;
    }
    else
    {
        cout << "He is innocent!" << endl;
    }
}