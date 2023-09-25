#include <stdio.h>
int main()
{
    int numberOfFriend, numberOfBottols, numberOflitterInEachBottol, numberOFLimes, numberOfSliceOfEcahLime, salt;
    int drinkEachNeed, saltEachNeed;

    scanf("%d %d %d %d %d %d %d %d", &numberOfFriend, &numberOfBottols, &numberOflitterInEachBottol, &numberOFLimes, &numberOfSliceOfEcahLime, &salt, &drinkEachNeed, &saltEachNeed);

    int totalSliceOfLime = numberOFLimes * numberOfSliceOfEcahLime;
    int totalMillilitersOfDrinks = numberOfBottols * numberOflitterInEachBottol;

    salt /= (numberOfFriend * saltEachNeed);

    totalSliceOfLime /= numberOfFriend;

    totalMillilitersOfDrinks /= (numberOfFriend * drinkEachNeed);

    if (salt <= totalSliceOfLime && salt <= totalMillilitersOfDrinks)
    {
        printf("%d\n", salt);
    }
    else if (totalSliceOfLime <= salt && totalSliceOfLime <= totalMillilitersOfDrinks)
    {
        printf("%d\n", totalSliceOfLime);
    }
    else
    {
        printf("%d\n", totalMillilitersOfDrinks);
    }
}