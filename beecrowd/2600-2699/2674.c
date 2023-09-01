// #include <stdio.h>
// int isPrime(int number)
// {
//     int i;
//     for (i = 2; i < number; i++)
//     {
//         if (number % i == 0)
//         {

//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     int number, isSuperPrime = 1;
//     while (scanf("%d", &number) != EOF)
//     {
//         if (isPrime(number))
//         {
//             while (number > 0)
//             {
//                 int mod = number % 10;
//                 if (!isPrime(mod))
//                 {
//                     isSuperPrime = 0;
//                     break;
//                 }
//                 number = number / 10;
//             }

//             if (isSuperPrime)
//             {
//                 printf("Super\n");
//             }
//             else
//             {
//                 printf("Primo\n");
//             }
//         }
//         else
//         {
//             printf("Nada\n");
//         }
//     }
// }

// 5% error