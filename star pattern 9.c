/*
to pront
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

#include<stdio.h>
int main()
{
    int row;
    printf("enter a no of row");
    scanf("%d",&row);
    for(int r=1; r<=row; r++)
    {
        for(int c=1; c<=r; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int r=row-1; r>=1; r--)
    {
        for(int c=1; c<=r; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}