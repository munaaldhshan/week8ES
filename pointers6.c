#include <stdio.h>

void swapArrays(int *array1, int *array2, int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = *(array1 + i);
        *(array1 + i) = *(array2 + i);
        *(array2 + i) = temp;
    }
}

int main()
{
    int size;

    printf("enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size];

    printf("enter %d elements for array 1:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("enter %d elements for array 2:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array2[i]);
    }

    swapArrays(array1, array2, size);

    printf("\nArray 1 after swapping: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array1[i]);
    }

    printf("\nArray 2 after swapping: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array2[i]);
    }

    return 0;
}
