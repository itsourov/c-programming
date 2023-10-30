#include <bits/stdc++.h>
using namespace std;

// bool cmp1(const pair<string, pair<int, int>> a, const pair<string, pair<int, int>> b)
// {
//     return a.first < b.first;
// }

bool cmp2(const pair<string, pair<int, int>> a, const pair<string, pair<int, int>> b)
{
    if (a.second.first > b.second.first)
    {
        return 1;
    }
    else if (a.second.first == b.second.first)
    {
        if (a.second.second < b.second.second)
        {
            return 1;
        }
        else if (a.second.second == b.second.second)
        {
            return a.first < b.first;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t;
    scanf("%d", &t);

    for (int testcase = 1; testcase <= t; testcase++)
    {
        vector<pair<string, pair<int, int>>> players;
        vector<string> attackers, deffenders;
        string name;
        int at, df;
        for (int i = 0; i < 10; i++)
        {
            cin >> name >> at >> df;

            players.push_back({name, {at, df}});
        }
        // sort(players.begin(), players.end(), cmp1);

        sort(players.begin(), players.end(), cmp2);
        // cout << "-----------------\n";
        // for (auto player : players)
        // {
        //     cout << player.first << " " << player.second.first << " " << player.second.second << endl;
        // }

        for (int i = 0; i < 5; i++)
        {
            attackers.push_back(players[i].first);
        }
        for (int i = 5; i < 10; i++)
        {
            deffenders.push_back(players[i].first);
        }

        printf("Case %d:\n", testcase);
        printf("(");
        sort(attackers.begin(), attackers.end());
        for (int i = 0; i < 5; i++)
        {
            if (i == 4)
            {
                cout << attackers[i] << ")\n";
            }
            else
            {
                cout << attackers[i] << ", ";
            }
        }

        printf("(");
        sort(deffenders.begin(), deffenders.end());
        for (int i = 0; i < 5; i++)
        {
            if (i == 4)
            {
                cout << deffenders[i] << ")\n";
            }
            else
            {
                cout << deffenders[i] << ", ";
            }
        }
    }
}
