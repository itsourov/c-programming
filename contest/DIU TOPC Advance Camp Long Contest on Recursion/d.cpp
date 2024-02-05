#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void printSpace(int n)
{
    if (n == 0)
        return;

    cout << " ";
    printSpace(n - 1);
}

void printStar(int n)
{
    if (n == 0)
        return;

    cout << "*";
    printStar(n - 1);
}
void printLine(int star, int space, int n)
{
    if (star > n)
        return;

    printSpace(space);
    printStar(star * 2 - 1);

    cout << endl;
    printLine(star + 1, space - 1, n);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    printLine(1, n - 1, n);
}