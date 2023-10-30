#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string st;
    cin >> st;
    int len = st.size();

    char previous = st[0];
    int maxF = 1;
    int currentF = 1;
    for (int i = 1; i < len; i++)
    {
        if (st[i] == previous)
        {
            currentF++;
            if (currentF >= maxF)
            {
                maxF = currentF;
            }
        }
        else
        {

            currentF = 1;
            previous = st[i];
        }
    }

    cout << maxF << endl;
}