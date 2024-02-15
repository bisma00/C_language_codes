#include <stdio.h>
int main()
{
    int row;
    printf("enter no of rows:");
    scanf("%d", &row);
    for (int r = 1; r <= row; r++)
    {
        for (int spc = 1; spc <= row - r; spc++)
        {
            printf(" ");                                             /*    print diamond  */
        }
        for (int c = 1; c <= r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int r=row-1; r>=1; r--)
    {
        for (int spc = 1; spc <= row - r; spc++)
        {
            printf(" ");
        }
        for(int c=1; c<=r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}