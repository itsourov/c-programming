// #include <stdio.h>
// #include <string.h>
// int getStringToNumber(char string[1000])
// {

//     int number = 0;
//     for (int i = 0; string[i] != '\n'; i++)
//     {
//         number += string[i];
//     }
//     return number;
// }

// int main()
// {
//     int testCase;
//     char string1[1000], string2[1000];
//     scanf("%d", &testCase);
//     for (int i = 0; i < testCase; i++)
//     {
//         scanf("%c", string1);
//         scanf("%c", string2);
//         printf("%d\n", getStringToNumber(string2) - getStringToNumber(string1));
//     }
// }