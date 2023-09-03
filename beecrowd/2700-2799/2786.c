#include <stdio.h>

int main()
{
    int roomWidth, roomLength;
    scanf("%d %d", &roomWidth, &roomLength);

    int totalTypeOneTile = roomWidth * roomLength;
    totalTypeOneTile += (roomWidth - 1) * (roomLength - 1);

    int totalTypeTwoTile = (roomWidth - 1) * 2 + (roomLength - 1) * 2;

    printf("%d\n", totalTypeOneTile);
    printf("%d\n", totalTypeTwoTile);
}
