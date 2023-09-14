#include <stdio.h>
#include <stdio.h>

int main()
{

    int index = 0, n, previousNumber = 0, rpm;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &rpm);
        if (i != 0)
        {
            if (rpm < previousNumber)
            {
                index = i + 1;
            }
        }
    }
}
