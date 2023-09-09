#include <stdio.h>
#include <string.h>

int main()
{
    char pass[50];
    while (fgets(pass, 50, stdin) != NULL)
    {
        int hasUpperCase = 0, hasLowerCase = 0, hasNumber = 0, hasInvalidChar = 0, length = 0;

        for (int i = 0; pass[i] != '\n'; i++)
        {
            if (pass[i] >= 'A' && pass[i] <= 'Z')
            {
                hasUpperCase = 1;
            }
            if (pass[i] >= 'a' && pass[i] <= 'z')
            {
                hasLowerCase = 1;
            }
            if (pass[i] >= '0' && pass[i] <= '9')
            {
                hasNumber = 1;
            }
            if (((pass[i] >= '0' && pass[i] <= '9') || (pass[i] >= 'a' && pass[i] <= 'z') || (pass[i] >= 'A' && pass[i] <= 'Z')))
            {
            }
            else
            {
                hasInvalidChar = 1;
            }
            length++;
        }

        if (hasUpperCase && hasLowerCase && hasNumber && !hasInvalidChar && length >= 6 && length <= 32)
        {
            printf("Senha valida.\n");
        }
        else
        {
            printf("Senha invalida.\n");
        }
    }
}