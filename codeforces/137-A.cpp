#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> hand;

    int count = 0;

    for (auto c : s)
    {
        if (hand.empty() || hand.top() == c)
        {
            hand.push(c);
        }
        else
        {
            while (!hand.empty())
            {
                hand.pop();
            }
            count++;
            hand.push(c);
        }
        if (hand.size() >= 5)
        {
            count++;
            while (!hand.empty())
            {
                hand.pop();
            }
        }
    }
    if (hand.size() > 0)
        count++;
    cout << count << endl;
}