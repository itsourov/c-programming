#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int q;
    string s;
    queue<string> line;
    for (int i = 0; i < n; i++)
    {
        cin >> q;
        if (q == 1)
        {
            cin >> s;
            line.push(s);
        }
        else
        {
            cout << line.front() << endl;
            line.push(line.front());
            line.pop();
        }
    }
}
