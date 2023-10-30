
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> k >> x;

    int totalSeconds = ((n - k) + 1) * x * 2;

    cout << totalSeconds << endl;
}