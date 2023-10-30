#include <bits/stdc++.h>
using namespace std;
string toLowerCase(const string &s)
{
    string result = s;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}
int main()
{
    vector<string> words;
    string line;

    while (getline(cin, line))
    {
        string word;
        for (char c : line)
        {
            if (isalpha(c))
            {
                word += c;
            }
            else if (!word.empty())
            {
                words.push_back(toLowerCase(word));
                word.clear();
            }
        }
        if (!word.empty())
        {
            words.push_back(toLowerCase(word));
        }
    }

    sort(words.begin(), words.end());
    words.erase(unique(words.begin(), words.end()), words.end());

    for (const string &word : words)
    {
        cout << word << endl;
    }

    return 0;
}