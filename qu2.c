/*
print
********
 ******
  ****
   **
    *
   **
  ****
 ******
********
*/

#include<stdio.h>
int main()
{
    int rows;
    printf("enterr row:");
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows; j++)
        {
            if(j<i)
            printf(" ");
            else
            printf("* ");
        }
        printf("\n");
    }
    for(int i=2; i<=rows-1; i++)
    {
        for(int j=1; j<=rows-1; j++)
    {
        if(j<rows-i)
        printf(" ");
        else
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}
