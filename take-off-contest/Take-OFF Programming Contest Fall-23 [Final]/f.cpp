
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int run = 0;
        int wicket = 0;
        int over;
        cin >> over;

        while (over--)
        {
            int balls;
            cin >> balls;
            bool noBallEffect = false;

            char x;
            for (int i = 0; i < balls; i++)
            {
                cin >> x;
                if (wicket < 10)
                {
                    if (x >= '0' && x <= '6')
                    {
                        run += x - '0';
                        noBallEffect = false;
                    }
                    if (x == 'B' || x == 'C')
                    {
                        if (noBallEffect == false)
                        {
                            wicket++;
                        }
                        noBallEffect = false;
                    }
                    if (x == 'R')
                    {
                        wicket++;
                        noBallEffect = false;
                    }
                    if (x == 'W')
                    {
                        run++;
                    }
                    if (x == 'N')
                    {
                        run++;
                        noBallEffect = true;
                    }
                }
            }
        }

        cout << run << endl;
    }
}