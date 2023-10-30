#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        if (a == b)
        {
            cout << "=" << endl;
        }
        else if (a < b)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << ">" << endl;
        }
    }
}