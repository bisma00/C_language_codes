#include <stdio.h>
#include <stdlib.h>
int **allocate_2d_arr(int rows, int cols)
{
    int **arr;
    arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }
    return arr;
}
void free_allocated_memory(int **arr, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        free(arr[i]);
    }
    free(arr);
}
void arr_row_col_sum(int **arr, int rows, int cols)
{
    int row_sum = 0;
    int col_sum1 = 0;
    int col_sum2 = 0;
    int col_sum3 = 0;

    for (int i = 0; i < rows; i++)
    {
        row_sum = 0;
        for (int j = 0; j < cols; j++)
        {
            row_sum = row_sum + arr[i][j];
            printf("%d ", arr[i][j]);
            if (i == 0)
            {
                col_sum1 = col_sum1 + arr[j][i];
            }
            if (i == 1)
            {
                col_sum2 = col_sum2 + arr[j][i];
            }
            if (i == 2)
            {
                col_sum3 = col_sum3 + arr[j][i];
            }
        }
        printf("%d", row_sum);
        printf("\n");
    }
    printf("%d %d %d", col_sum1, col_sum2, col_sum3);
}
int main()
{
    int rows = 3, cols = 3;
    int **mat1 = allocate_2d_arr(rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    arr_row_col_sum(mat1, 3, 3);

    free_allocated_memory(mat1, 3);
    return 0;
}