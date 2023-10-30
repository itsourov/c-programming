#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<char, int> mp;
    mp['a'] = 1;

    int t;
    cin >> t;
    getchar();
    for (int i = 1; i <= t; i++)
    {
        string st;
        getline(cin, st);
        long long int press = 0;
        int keyPresses = 0;

        int len = st.length();

        for (int j = 0; j < len; j++)
        {
            if (st[j] == 'a' || st[j] == 'd' || st[j] == 'g' || st[j] == 'j' || st[j] == 'm' || st[j] == 'p' || st[j] == 't' || st[j] == 'w' || st[j] == ' ')
                keyPresses += 1;
            else if (st[j] == 'b' || st[j] == 'e' || st[j] == 'h' || st[j] == 'k' || st[j] == 'n' || st[j] == 'q' || st[j] == 'u' || st[j] == 'x')
                keyPresses += 2;
            else if (st[j] == 'c' || st[j] == 'f' || st[j] == 'i' || st[j] == 'l' || st[j] == 'o' || st[j] == 'r' || st[j] == 'v' || st[j] == 'y')
                keyPresses += 3;
            else if (st[j] == 's' || st[j] == 'z')
                keyPresses += 4;
        }

        cout << "Case #" << t << ": " << keyPresses << endl;
    }
}
