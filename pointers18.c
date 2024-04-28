#include <stdio.h>

void getMinMax(int *arr, int size, int *result)
{
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    result[0] = min;
    result[1] = max;
}

int main()
{
    int size;

    printf("enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result[2];

    getMinMax(arr, size, result);

    printf("minimum value: %d\n", result[0]);
    printf("maximum value: %d\n", result[1]);

    return 0;

}
