#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (i + 2 < size && s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            i += 2;
        }
        else if (i + 1 < size && s[i] == '1' && s[i + 1] == '4')
        {
            i++;
        }
        else if (i < size && s[i] == '1')
        {
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}