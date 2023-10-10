#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string teamName;
    cin >> n;
    map<string, int> scoreboard;
    for (int i = 0; i < n; i++)
    {
        cin >> teamName;
        scoreboard[teamName]++;
    }
    int maxWin = 0;
    for (auto team : scoreboard)
    {
        if (team.second > maxWin)
        {
            maxWin = team.second;
            teamName = team.first;
        }
    }
    cout << teamName << endl;
}