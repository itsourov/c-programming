#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, cx, cy;
    cin >> x >> y >> cx >> cy;

    double distance = sqrt((cx - x) * (cx - x) + (cy - y) * (cy - y));

    double one, two, three, four;
    cin >> one >> two >> three >> four;

    if (distance <= one)
        cout << 100 << endl;
    else if (distance <= two)
        cout << 75 << endl;
    else if (distance <= three)
        cout << 50 << endl;
    else if (distance <= four)
        cout << 25 << endl;
}