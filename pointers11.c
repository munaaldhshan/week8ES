#include <stdio.h>

void multiplyMatrices(int *matrix1, int *matrix2, int *result)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(result + i * 3 + j) = 0;
            for (int k = 0; k < 3; k++)
            {
                *(result + i * 3 + j) += *(matrix1 + i * 3 + k) * *(matrix2 + k * 3 + j);
            }
        }
    }
}

void displayMatrix(int *matrix)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", *(matrix + i * 3 + j));
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[3][3], matrix2[3][3], result[3][3];

    printf("enter the elements of matrix 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("enter the elements of matrix 2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    multiplyMatrices((int *)matrix1, (int *)matrix2, (int *)result);

    printf("\nresult :\n");
    displayMatrix((int *)result);

    return 0;
}
