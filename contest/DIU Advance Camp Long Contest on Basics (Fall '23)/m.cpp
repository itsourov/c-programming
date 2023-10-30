#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    while (1)
    {
        cin >> n;
        if (n < 0)
            break;

        long long int total = n * (n + 1) / 2;
        total++;

        printf("%lld\n", total);
    }
}