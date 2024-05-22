#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> graph[30];
bool marked[30];

bool mark(int index)
{
    if (marked[index] == false)
    {
        marked[index] = true;
    }
    else
    {
        return false;
    }
    for (auto item : graph[index])
    {
        if (marked[item] == false)
        {
            mark(item);
        }
    }
    return true;
}
void solve()
{
    for (int i = 0; i < 30; i++)
    {
        marked[i] = false;
        graph[i] = {};
    }

    string s;

    int treeCount = 0;
    int acronCount = 0;
    while (cin >> s)
    {
        if (s[0] == '*')
        {

            cin >> s;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {

                    bool x = mark(s[i] - 'A');

                    if (graph[s[i] - 'A'].size() == 0)
                    {
                        acronCount++;
                    }
                    else if (x)
                    {
                        treeCount++;
                    }
                }
            }
            break;
        }
        else
        {
            int a = s[1] - 'A';
            int b = s[3] - 'A';
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
    }
    // for (int i = 0; i < 30; i++)
    // {
    //     cout << (char)i + 'A' << " - ";
    //     for (auto item : graph[i])
    //     {
    //         cout << item << " ";
    //     }
    //     cout << endl;
    // }

    cout << "There are " << treeCount << " tree(s) and " << acronCount << " acorn(s)." << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}