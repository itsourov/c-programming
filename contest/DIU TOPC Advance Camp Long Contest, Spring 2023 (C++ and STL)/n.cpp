#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string input;
        vector<string> words;
        getline(cin, input);
        string word;

        istringstream stm(input);
        while (stm >> word)
        {
            words.push_back(word);
        }

        for (auto &it : words)
        {
            reverse(it.begin(), it.end());
            cout << it << " ";
            cout << endl;
        }
    }
}
