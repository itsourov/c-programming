#include <stdio.h>
int main()
{
    int input, par[5], impar[5], parCount = 0, imparCount = 0;
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &input);
        if (input % 2 == 0)
        {
            par[parCount] = input;
            parCount++;
        }
        else
        {
            impar[imparCount] = input;
            imparCount++;
        }

        if (parCount == 5)
        {
            parCount = 0;
            for (int i = 0; i < 5; i++)
            {
                printf("par[%d] = %d\n", i, par[i]);
            }
        }
        if (imparCount == 5)
        {
            imparCount = 0;
            for (int i = 0; i < 5; i++)
            {
                printf("impar[%d] = %d\n", i, impar[i]);
            }
        }
    }

   
    for (int i = 0; i < imparCount; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    
    for (int i = 0; i < parCount; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }
}
