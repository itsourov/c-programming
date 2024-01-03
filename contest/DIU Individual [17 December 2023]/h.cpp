#include <bits/stdc++.h>
using namespace std;
#define int long long
string s;

bool checkString(int rindex)
{
    map<char, int> mp;
    for (int i = rindex - 25; i <= rindex; i++)
    {
        if (s[i] == '?' || mp[s[i]] == 0)
        {
            mp[s[i]]++;
        }
        else
        {
            return false;
        }
    }
    map<char, int> used;
    for (int i = 'A'; i <= 'Z'; i++)
    {
        used[i]++;
    }
    for (int i = rindex - 25; i <= rindex; i++)
    {
        if (s[i] == '?')
        {
            for (auto item : used)
            {
                if (item.second > 0)
                {
                    s[i] = item.first;
                    used[item.first]--;
                    break;
                }
            }
        }
        else
        {

            used[s[i]]--;
        }
    }

    return true;
}
signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    int size = s.size();

    if (size < 26)
    {
        cout << -1 << endl;
    }
    else
    {

        int rindex = 25;
        while (rindex < size)
        {
            for (int i = rindex - 25; i <= rindex; i++)
            {
                if (checkString(rindex))
                {
                    for (int j = 0; j < size; j++)
                    {
                        if (s[j] == '?')
                        {
                            s[j] = 'A';
                        }
                    }

                    cout << s << endl;

                    return 0;
                }
            }
            rindex++;
        }

        cout << -1 << endl;
    }
}