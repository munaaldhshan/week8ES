#include <stdio.h>

int searchElement(int *array, int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (*(array + i) == target)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int size, target;

    printf("enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("enter the element to search: ");
    scanf("%d", &target);

    int result = searchElement(array, size, target);

    if (result != 0)
    {
        printf("element found at index %d\n", result);
    }
    else
    {
        printf("element not found in the array.\n");
    }

    return 0;
}
