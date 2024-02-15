#include <stdio.h>
#include <stdlib.h>

int **allocate_2d_array(int rows, int cols)
{
    int **arr;
    arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    return arr;
}

int **matrix_multiply(int **arr, int **arr2)
{
    int **mul_arr = allocate_2d_array(3, 3);
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = 0;
            for (int k = 0; k < 2; k++)
            {
                sum = sum + (arr[i][k] * arr2[k][j]);
            }
            mul_arr[i][j] = sum;
        }
    }
    return mul_arr;
}
int **make_small(int **big_mat, int start_i, int start_j)
{

    int **extract = allocate_2d_array(2, 2);
    int pre = start_j;
    
    for (int i = 0; i < 2; i++, start_i++)
    {
        if (i == 1)
        {
            start_j = pre;
        }

        for (int j = 0; j < 2; j++, start_j++)
        {
            extract[i][j] = big_mat[start_i][start_j];
        }
    }
    return extract;
}
int average_(int **arr)
{
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    int avg = sum / 4;
    return avg;
}
void apply_filter(int **arr, int n, int start_i, int start_j)
{
    int pre = start_j;
    for (int i = 0; i < 2; i++, start_i++)
    {
        if (i == 1)
        {
            start_j = pre;
        }

        for (int j = 0; j < 2; j++, start_j++)
        {
            arr[start_i][start_j] = arr[start_i][start_j] - n;
        }
    }
}

int main()
{
    int rows = 6, cols = 6;
    int **arr = allocate_2d_array(rows, cols);
    int **filter_mat = allocate_2d_array(2, 2);
    printf("Enter Your actual matrix");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter Your filter matrix");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &filter_mat[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int start_i = 0;
    int start_j = 0;
    int n = 0;
    while (n != rows / 2 * cols / 2)
    {

        int **extracted = make_small(arr, start_i, start_j);

        int **multiply = matrix_multiply(extracted, filter_mat);

        int average = average_(multiply);

        apply_filter(arr, average, start_i, start_j);

        if (start_j != cols - 1)
        {
            start_j = start_j + 2;
        }
        if (start_j == cols)
        {
            start_i = start_i + 2;
            start_j = 0;
        }
        n++;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}