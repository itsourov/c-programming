#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int testCase = 0; testCase < n; testCase++)
    {
        int a, b;
        cin >> a >> b;

        if (max(a, b) % min(a, b) == 0)
        {
            printf("%d %d\n", a, b);
        }
        else
        {
            printf("-1\n");
        }
    }
}