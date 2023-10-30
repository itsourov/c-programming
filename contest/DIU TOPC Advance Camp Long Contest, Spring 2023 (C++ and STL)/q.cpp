#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int testCase = 1; testCase <= t; testCase++)
    {

        deque<int> q;
        printf("Case %d:\n", testCase);

        int nSize, m, input;
        string command;
        cin >> nSize >> m;

        for (int i = 0; i < m; i++)
        {
            cin >> command;
            if (command == "pushLeft")
            {
                cin >> input;
                if (q.size() < nSize)
                {
                    q.push_front(input);
                    printf("Pushed in left: %d\n", input);
                }
                else
                {
                    printf("The queue is full\n");
                }
            }
            else if (command == "pushRight")
            {
                cin >> input;

                if (q.size() < nSize)
                {
                    q.push_back(input);
                    printf("Pushed in right: %d\n", input);
                }
                else
                {
                    printf("The queue is full\n");
                }
            }
            else if (command == "popLeft")
            {
                if (!q.empty())
                {
                    printf("Popped from left: %d\n", q.front());
                    q.pop_front();
                }
                else
                {
                    printf("The queue is empty\n");
                }
            }
            else
            {
                if (!q.empty())
                {
                    printf("Popped from right: %d\n", q.back());
                    q.pop_back();
                }
                else
                {
                    printf("The queue is empty\n");
                }
            }
        }
    }
}
