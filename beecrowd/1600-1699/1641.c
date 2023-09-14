#include <stdio.h>
#include <math.h>

int main()
{

    int r, w, l, testCount = 1;
    while (1)
    {
        scanf("%d", &r);
        if (r == 0)
        {
            break;
        }
        scanf("%d %d", &w, &l);

        if (sqrt(w * w + l * l) <= r * 2)
        {
            printf("Pizza %d fits on the table.\n", testCount);
        }
        else
        {
            printf("Pizza %d does not fit on the table.\n", testCount);
        }

        testCount++;
    }
}
