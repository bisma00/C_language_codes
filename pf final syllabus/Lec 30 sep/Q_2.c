#include <stdio.h>
#include <stdlib.h>
struct array
{
    int **mat;
    int row;
    int col;
};

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
void get_data(int **arr, int **arr2, int row, int col)
{
    FILE *fptr = fopen("array.txt", "r");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            fscanf(fptr, "%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            fscanf(fptr, "%d", &arr2[i][j]);
        }
    }
}
int arr_diagonal_sum(int **arr1, int **arr2, int row, int col)
{
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = i; j < col; j++)
            {

                sum = sum + arr1[i][j] + arr2[i][j];
                printf("%d\n", arr1[i][j]);
                printf("%d\n", arr2[i][j]);
            }
        }
        return sum;
    }
}
void free_allocated_memory(int **arr, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        free(arr[i]);
    }
    free(arr);
}
int main()

{
    struct array mat1, mat2;
    printf("Enter the number of rows: ");
    scanf("%d", &mat1.row);
    printf("Enter the number o: ");
    scanf("%d", &mat1.col);
    mat2.row = mat1.row;
    mat2.col = mat1.col;

    mat1.mat = allocate_2d_array(mat1.row, mat1.col);
    mat2.mat = allocate_2d_array(mat2.row, mat2.col);

    get_data(mat1.mat, mat2.mat, mat1.row, mat1.col);
    printf("Sum is %d\n", arr_diagonal_sum(mat1.mat, mat2.mat, mat1.row, mat1.col));
    for (int i = 0; i < mat1.row; i++)
    {
        for (int j = 0; j < mat1.col; j++)
        {
            printf("%d ", mat1.mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < mat2.row; i++)
    {
        for (int j = 0; j < mat2.col; j++)
        {
            printf("%d ", mat2.mat[i][j]);
        }
        printf("\n");
    }

    free_allocated_memory(mat1.mat, mat1.row);
    free_allocated_memory(mat2.mat, mat2.row);

    return 0;
}