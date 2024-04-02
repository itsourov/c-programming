#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<int> bindec = {1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 100000, 100001, 100010, 100011, 100100, 100101, 100110, 100111, 101000, 101001, 101010, 101011, 101100, 101101, 101110, 101111, 110000, 110001, 110010, 110011, 110100, 110101, 110110, 110111, 111000, 111001, 111010, 111011, 111100, 111101, 111110, 111111, 1000000};

map<int, bool> mp;
void printBin(int n)
{
    bool f = false;
    for (int i = 15; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
        {
            cout << "1";
            f = true;
        }
        else
        {
            if (f)
                cout << "0";
        }
    }
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (mp[n])
    {
        cout << "YES" << endl;
        return;
    }
    int index = 2;
    while (n > 0 && bindec[index] < n)
    {
        if (n % bindec[index] == 0)
        {
            while (n % bindec[index] == 0)
            {
                n /= bindec[index];
                if (mp[n])
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
        index++;
    }

    if (mp[n])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
        // cout << n << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    bindec[0] = true;
    for (auto item : bindec)
    {
        mp[item] = true;
    }
    while (t--)
    {
        solve();
    }
}