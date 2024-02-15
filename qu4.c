/* The output of the above c program; is as follows:

Enter Left Arrow Number Pattern Rows = 5
Printing Left Arrow Numbers Pattern
5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1 
2 1 
3 2 1 
4 3 2 1 */



#include <stdio.h>
 
int main()
{
    int rows, i, j;
 
    printf("Enter Left Arrow Number Pattern Rows = ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("* ", j);
        }
        printf("\n");
    }
 
    for (i = 2; i <= rows; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("* ", j);
        }
        printf("\n");
    }
}
