/*
program to  print  pyramid
*******
 *****
  ***
   *
   
  */

#include<stdio.h>
int main()
{
    int row;
    printf("enter a row:");
    scanf("%d",&row);
    for(int r=row; r>=1; r--)
    {
        for(int spc=1; spc<=row-r; spc++)
        {
            printf(" ");
        }
        for(int c=1; c<=2*r-1; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}