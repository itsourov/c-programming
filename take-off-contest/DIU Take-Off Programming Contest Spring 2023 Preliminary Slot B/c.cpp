#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hx, hy, ax, ay, bx, by;
    cin >> hx >> hy >> ax >> ay >> bx >> by;

    double diff1 = sqrt((hx - ax) * (hx - ax) + (hy - ay) * (hy - ay));
    double diff2 = sqrt((hx - bx) * (hx - bx) + (hy - by) * (hy - by));

    if (diff1 <= diff2)
        cout << "First" << endl;
    else
        cout << "Second" << endl;
}