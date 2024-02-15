#include <stdio.h>

int main()
{
    int rows, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // upper half  kite
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= (rows - i); j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            if (k == 1 || k == i || k == 2 * i - 1 || i == rows)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    // lower half kite
    for (i = rows - 1; i >= 1; i--)
    {
        for (j = 1; j <= (rows - i); j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            if (k == i || k == 1 || k == 2 * i - 1 || i == rows)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    // for bottom part of kite
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            if (k == rows || k == 1 || k == i || i == rows)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
    return 0;
}