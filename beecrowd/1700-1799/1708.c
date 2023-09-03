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
            lapCountOfX += (1.0 / x);
            lapCountOfY += (1.0 / y);

            if (lapCountOfX >= lapCountOfY + 1)
            {

                break;
            }
        }
        if (lapCountOfY - (int)lapCountOfY == 0)
        {
            printf("%d\n", (int)lapCountOfY);
        }
        else
        {

            printf("%d\n", (int)lapCountOfY + 1);
        }
    }
}
