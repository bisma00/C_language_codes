#include <stdio.h>
#include <stdlib.h>
int **matrix_multiply(int **arr)
{
    int **mul_arr;
    mul_arr = (int **)malloc(3 * sizeof(int *));
    for (int i = 0; i < 3; i++)
    {
        mul_arr[i] = (int *)malloc(3 * sizeof(int));
    }
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum = sum + (arr[i][k] * arr[k][j]);
            }
            mul_arr[i][j] = sum;
        }
    }
    return mul_arr;
}
int main()
{
    int **arr;
    int rows = 3, cols = 3;
    arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int **arr2 = matrix_multiply(arr);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}