#include <stdio.h>
int main(void)
{
    char input;
    printf("Enter alphabet to know whether it is a vowel or a consonant: ");
    scanf("%c", &input);

    if ((input >= 65 && input <= 90) || (input >= 97 && input <= 122))
    {
        if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' || input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U')
        {
            printf("its a vowel\n");
        }
        else
        {
            printf("its a constant\n");
        }
    }
    else
    {
        printf("input is not an alphabet\n");
    }
}