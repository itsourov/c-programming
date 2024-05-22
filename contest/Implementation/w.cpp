#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;

    while (cin >> s)
    {
        set<string> st;
        for (int i = 0; i < s.size(); i++)
        {
            int l = i;
            int r = i;
            while (l >= 0 && r <= s.size() && s[l] == s[r])
            {
                string temp = s.substr(l, (r - l + 1));

                st.insert(temp);
                l--;
                r++;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            int l = i - 1;
            int r = i;
            while (l >= 0 && r <= s.size() && s[l] == s[r])
            {
                string temp = s.substr(l, (r - l + 1));

                st.insert(temp);
                l--;
                r++;
            }
        }
        // cout << st.size() << endl;
        cout << "The string '" << s << "' contains " << st.size() << " palindromes." << endl;
    }
}