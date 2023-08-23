#include <stdio.h>
int main()
{

    int yesNo;
    int goalOfInter, goalOfGremio;
    int wonByInter = 0, wonByGremio = 0, tie = 0;

    while (1)
    {
        scanf("%d %d", &goalOfInter, &goalOfGremio);
        if (goalOfInter == goalOfGremio)
        {
            tie++;
        }
        else if (goalOfInter > goalOfGremio)
        {
            wonByInter++;
        }
        else
        {
            wonByGremio++;
        }

        while (1)
        {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &yesNo);
            if (yesNo == 1 || yesNo == 2)
            {
                break;
            }
        }

        if (yesNo == 2)
        {
            break;
        }
    }

    printf("%d grenais\n", wonByGremio + wonByInter + tie);
    printf("Inter:%d\n", wonByInter);
    printf("Gremio:%d\n", wonByGremio);
    printf("Empates:%d\n", tie);
    printf("Inter venceu mais\n");

    return 0;
}