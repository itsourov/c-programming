#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void solve(int n)
{
    vector<int> digits;
    if (n == 0)
    {
        digits.push_back(0);
    }
    while (n > 0)
    {
        int digit = n % 5;
        // cout << digit << endl;
        if (digit == 0)
            digits.push_back(0);
        else if (digit == 1)
            digits.push_back(2);
        else if (digit == 2)
            digits.push_back(4);
        else if (digit == 3)
            digits.push_back(6);
        else if (digit == 4)
            digits.push_back(8);
        n /= 5;
    }

    reverse(digits.begin(), digits.end());
    for (auto item : digits)
        cout << item;
    cout << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    n--;
    solve(n);
    // for (int i = 0; i < 150; i++)
    // {
    //     solve(i);
    // }
}