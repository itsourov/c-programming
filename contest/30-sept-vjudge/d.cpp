#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    int input;
    int validTeamMemberCount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input + k <= 5)
            validTeamMemberCount++;
    }
    int teamCount = validTeamMemberCount / 3;
    cout << teamCount << endl;
}