#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int temp;
    while (t--)
    {
        int n;
        string type;
        cin >> n >> type;

        if (type == "FIFO")
        {
            queue<int> line;
            for (int i = 0; i < n; i++)
            {
                cin >> type;
                if (type == "IN")
                {
                    cin >> temp;
                    line.push(temp);
                }
                else
                {
                    if (!line.empty())
                    {
                        cout << line.front() << endl;
                        line.pop();
                    }
                    else
                    {
                        cout << "None" << endl;
                    }
                }
            }
        }
        else
        {
            stack<int> st;
            for (int i = 0; i < n; i++)
            {
                cin >> type;
                if (type == "IN")
                {
                    cin >> temp;
                    st.push(temp);
                }
                else
                {
                    if (!st.empty())
                    {
                        cout << st.top() << endl;
                        st.pop();
                    }
                    else
                    {
                        cout << "None" << endl;
                    }
                }
            }
        }
    }
}
