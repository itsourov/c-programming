#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    map<string, int> skills;
    for (int i = 0; i < m; i++)
    {
        string skill;
        int value;
        cin >> skill >> value;
        skills.insert({skill, value});
    }

    long long int totalValue;
    string input;
    while (n--)
    {
        totalValue = 0;
        while (cin >> input && input[0] != '.')
        {
            totalValue += skills[input];
        }
        cout << totalValue << endl;
    }
}