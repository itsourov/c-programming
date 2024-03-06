#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

bool isPalindrome(string &S)
{

    for (int i = 0; i < S.length() / 2; i++)
    {

        if (S[i] != S[S.length() - i - 1])
        {

            return false;
        }
    }

    return true;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> vt;
    for (int i = 1; i < 1000000; i++)
    {
        if ((i * i * i) > n)
        {
            break;
        }
        vt.push_back(to_string(i * i * i));
        // cout << vt.back() << endl;
    }
    for (int i = vt.size() - 1; i >= 0; i--)
    {
        if (isPalindrome(vt[i]))
        {
            cout << vt[i] << endl;
            return 0;
        }
    }
}