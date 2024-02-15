
/*
#include <stdio.h>

void changeTextColor(int color)
{
    printf("\033[1;%dm", color);
}
void pencil()
{
    int row , outlinecolor , fillcolor , position;
    char symbol;
    printf("enter symbol with which you want to make the shape");
    scanf("%c", &symbol);
    printf("Enter the row: ");
    scanf("%d", &row);

     printf(" enter position where you want to place your shape :");
    printf("press 1 for left , 2 for right , 3 for middle :");
    scanf("%d", &position);

    printf("Select the color of the outline:\n");
    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

    printf("Enter your choice (1-5): ");
    scanf("%d",&outlinecolor);

    switch (outlinecolor)
    {
    case 1:
        outlinecolor = 31; // Red
        break;
    case 2:
        outlinecolor = 32; // Green
        break;
    case 3:
        outlinecolor = 34; // Blue
        break;
    case 4:
        outlinecolor = 33; // Yellow
        break;
    case 5:
    default:
        outlinecolor = 0; // Default (White)
    }
    printf("Select the color of the fill:\n");
    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

    printf("Enter your choice (1-5): ");
    scanf("%d", &fillcolor);

    switch (fillcolor)
    {
    case 1:
        fillcolor = 31; // Red
        break;
    case 2:
        fillcolor = 32; // Green
        break;
    case 3:
        fillcolor = 34; // Blue
        break;
    case 4:
        fillcolor = 33; // Yellow
        break;
    case 5:
    default:
        fillcolor = 0; // Default (White)
    }


    //left
    if(position==1)
    {
 for (int i = 1; i <= row; i++)
    {
        for (int spc = 1; spc <= row - i; spc++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == row || j == 1 || j == i || i == row)
            {
                changeTextColor(outlinecolor);
                printf("%c ",symbol);
            }
            else
            {
                changeTextColor(fillcolor);
                printf("%c ",symbol);
            }
        }
        printf("\n");
    }

 for (int i = 1; i <= row - 1; i++)
        {
            printf(" ");

        }




 for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= row; j++)
            {
                if (i == 1 || i == row || j == 1 || j == row)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                }
            }
            printf("\n");
        }


    }


}

*/

#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the Value for n : ");
    scanf("%d",&n);
 
    for(i=-n; i<=n; i++) // Note that 'i' is starting from -n (negative n)
    {
        k=i;
 
        for(j=0; j<=n; j++)
        {
            if(k<=j)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}