#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    string result;
    for (long long int testCase = 1; testCase <= t; testCase++)
    {
        printf("Case %lld:\n", testCase);

        long long int joduScode = 0, moduScore = 0;
        long long int nRound, kMaxCap;
        cin >> nRound >> kMaxCap;
        vector<int> list;
        long long int j, m;
        for (long long int i = 0; i < nRound; i++)
        {
            cin >> j >> m;

            if (m < j)
            {
                moduScore += m;
                while (!list.empty())
                {
                    if (list.back() < j)
                    {

                        joduScode += list.back();
                        list.pop_back();
                    }
                    else
                    {
                        break;
                    }
                }
                if (list.size() < kMaxCap)
                {
                    list.push_back(j);
                }
            }
            else
            {
                joduScode += j;
                while (!list.empty())
                {
                    if (list.back() < m)
                    {
                        moduScore += list.back();
                        list.pop_back();
                    }
                    else
                    {
                        break;
                    }
                }
                if (list.size() < kMaxCap)
                {
                    list.push_back(m);
                }
            }

            // cout << "jodu: " << joduScode << " modu:" << moduScore << endl;

            // cout << "List: ";
            // for (auto item : list)
            // {
            //     cout << item << " ";
            // }
            // cout << endl;

            if (joduScode == moduScore)
            {
                printf("Draw\n");
            }
            else if (joduScode > moduScore)
            {
                printf("Jodu\n");
            }
            else
            {
                printf("Modu\n");
            }
        }
    }
}