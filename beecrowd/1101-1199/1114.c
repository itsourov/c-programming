#include <stdio.h>
int main()
{

    int input;
    while (1)
    {
        scanf("%d", &input);
        if (input == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}