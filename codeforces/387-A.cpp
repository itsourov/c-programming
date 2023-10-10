#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ch, cm, sh, sm;
    int dh, dm;
    scanf("%d:%d", &ch, &cm);
    scanf("%d:%d", &sh, &sm);

    dm = cm - sm;
    if (dm < 0)
    {
        dm += 60;
        sh++;
    }

    dh = ch - sh;
    if (dh < 0)
    {
        dh += 24;
    }
    printf("%02d:%02d\n", dh, dm);
}