#include <bits/stdc++.h>
using namespace std;
bool cmp(const pair<string, string> a, const pair<string, string> b)
{
    return b.second < a.second;
}
int main()
{
    int t;
    cin >> t;
    for (int testCase = 0; testCase < t; testCase++)
    {
        int n;
        cin >> n;
        vector<pair<string, string>> peoples;
        string name, year;

        getchar();
        for (int i = 0; i < n; i++)
        {
            getline(cin, name);

            int len = name.size();
            year = name[len - 4];
            year += name[len - 3];
            year += name[len - 2];
            year += name[len - 1];
            name.pop_back();
            name.pop_back();
            name.pop_back();
            name.pop_back();
            peoples.push_back({name, year});
        }
        sort(peoples.begin(), peoples.end(), cmp);

        for (int i = 0; i < n; i++)
        {
            cout << peoples[i].first << endl;
        }
    }
}