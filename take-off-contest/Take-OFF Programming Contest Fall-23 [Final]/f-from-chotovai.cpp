#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t, ov;
    cin >> t;

    while (t--)
    {
        cin >> ov;
        int run = 0, out = 0;
        for (int j = 0; j < ov; j++)
        {
            int ball;
            cin >> ball;
            int active = 0;

            for (int k = 0; k < ball; k++)
            {
                char type;
                cin >> type;
                if (out < 10)
                {
                    if (type == 'N')
                    {
                        run++;
                        active = 1;
                    }
                    else if (type == 'W')
                    {
                        run++;
                    }
                    else if (type >= '0' && type <= '6')
                    {
                        run += type - '0';
                        active = 0;
                    }
                    else if (type == 'R')
                    {
                        out++;

                        active = 0;
                    }
                    else if (type == 'B' || type == 'C')
                    {
                        if (!active)
                        {
                            out++;
                        }
                        else
                        {
                            active = 0;
                        }
                    }
                }
            }
        }

        cout << run << endl;
    }
}