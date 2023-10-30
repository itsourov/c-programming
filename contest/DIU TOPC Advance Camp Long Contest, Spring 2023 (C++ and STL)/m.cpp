#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int ok = 1;
        for (auto c : s)
        {
            if (c == '{' || c == '[' || c == '(')
            {
                st.push(c);
            }
            else
            {
                if (!st.empty())
                {

                    if ((c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '['))
                    {
                        ok = 0;
                    }
                    else
                    {

                        st.pop();
                    }
                }
                else
                {
                    ok = 0;
                }
            }
        }
        if (ok && st.size() == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
