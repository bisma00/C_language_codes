/*
program to print arrow pattern 
*
 **
  ***
   ****
    *****
    ****
    ***
    **
   *




*/





#include <stdio.h>
int main()
{
    int row;
    printf("enter a row :");
    scanf("%d", &row);
    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < row - i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
