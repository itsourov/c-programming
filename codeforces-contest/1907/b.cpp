#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        stack<char> typedString;

        for (char c : s)
        {
            if (c == 'b' && !typedString.empty())
            {
                typedString.pop();
            }
            else if (c == 'B' && !typedString.empty())
            {
                typedString.pop();
            }
            else if (isalpha(c))
            {
                typedString.push(c);
            }
        }

        string result;
        while (!typedString.empty())
        {
            result = typedString.top() + result;
            typedString.pop();
        }

        cout << result << endl;
    }

    return 0;
}
