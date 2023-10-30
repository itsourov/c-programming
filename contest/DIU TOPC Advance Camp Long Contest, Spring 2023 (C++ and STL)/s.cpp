#include <bits/stdc++.h>
using namespace std;

bool isOldUnique(string us, map<string, string> requests)
{
    int isUnq = 1;
    for (auto req : requests)
    {
        if (req.second == us)
        {
            isUnq = 0;
            break;
        }
    }
    return isUnq;
}

int main()
{
    int q;
    cin >> q;
    string oldUsername, newUsername;

    map<string, string> requests;
    map<string, string> uniquePersons;

    for (int i = 0; i < q; i++)
    {
        cin >> oldUsername >> newUsername;
        requests.insert({oldUsername, newUsername});
    }

    for (auto req : requests)
    {
        if (isOldUnique(req.first, requests))
        {
            string newName = req.second;
            while (requests.find(newName) != requests.end())
            {
                newName = requests[newName];
            }
            uniquePersons.insert({req.first, newName});
        }
    }
    cout << uniquePersons.size() << endl;
    for (auto up : uniquePersons)
    {
        cout << up.first << " " << up.second << endl;
    }
}