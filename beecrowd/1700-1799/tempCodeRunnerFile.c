#include <stdio.h>

int main()
{
    int x, y;
    double lapCountOfX, lapCountOfY;
    while (scanf("%d %d", &x, &y) != EOF)
    {

        lapCountOfX = 1.0;
        lapCountOfY = 1.0;

        while (1)
        {

            if (lapCountOfX > lapCountOfY + 1)
            {

                break;
            }
            lapCountOfX += (1.0 / x);
            lapCountOfY += (1.0 / y);
        }
        if ((int)lapCountOfY == 30 || (int)lapCountOfY == 1)
        {
            printf("%lf %lf %d %d\n", lapCountOfX, lapCountOfY,x,y);
        }
        else
        {
            printf("%.lf\n", lapCountOfY);
        }
    }
}
