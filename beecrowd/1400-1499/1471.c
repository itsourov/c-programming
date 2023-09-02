#include <stdio.h>
int main()
{

    int volunteersWent, volunteersReturned;
    while (scanf("%d %d", &volunteersWent, &volunteersReturned) != EOF)
    {
        int volunteers[volunteersReturned];
        for (int i = 0; i < volunteersReturned; i++)
        {
            scanf("%d", &volunteers[i]);
        }

        if (volunteersWent == volunteersReturned)
        {
            printf("*\n");
        }
        else
        {

            for (int i = 1; i <= volunteersWent; i++)
            {
                int returned = 0;
                for (int j = 0; j < volunteersReturned; j++)
                {
                    if (i == volunteers[j])
                    {
                        returned = 1;
                    }
                }
                if (!returned)
                {
                    printf("%d ", i);
                }
            }
            printf("\n");
        }
        // printf("\n");
    }
}