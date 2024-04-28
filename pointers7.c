#include <stdio.h>

void reverseArray(int *array, int size)
{
    int *startPtr = array;
    int *endPtr = array + size - 1;

    while (startPtr < endPtr)
    {
        int temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;

        startPtr++;
        endPtr--;
    }
}

int main()
{
    int size;

    printf("enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    reverseArray(array, size);

    printf("\nreversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
