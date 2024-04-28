#include <stdio.h>

void copyArray(int *source, int *destination, int size)
{
    int *sourcePtr = source;
    int *destPtr = destination;

    for (int i = 0; i < size; i++)
    {
        *(destPtr + i) = *(sourcePtr + i);
    }
}

int main()
{
    int sourceArray[5];
    int destinationArray[5];

    printf("enter 5 elements for the source array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &sourceArray[i]);
    }

    copyArray(sourceArray, destinationArray, 5);

    printf("\nsource : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", sourceArray[i]);
    }

    printf("\ndestination : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}
