/*
program to print
10000
02000
00300
00040
00005
*/
#include <stdio.h>
int main()
{
    int size,k;
    printf("enter a no of rows");
    scanf("%d", &size);
    printf("square with diadnol no remaining 0's \n");
    for (int r = 1; r <=size; r++)
    {
        for (int c = 1; c < r; c++)
        {
            printf("0 ");
        }
        
        printf("%d ", r);
        for (int k = r; k < size; k++)
        {   
            printf("0 ");
        }
        printf("\n");
    }
    return 0;
}