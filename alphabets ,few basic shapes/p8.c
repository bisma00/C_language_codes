// hollow_pyramid
#include <stdio.h>
void hollow_pyramid();
void changeTextColor();
void changeTextColor(int color)
{
    printf("\033[1;%dm", color);
}
void hollow_pyramid()
{
    int row, color, position;
    char symbol;
    printf("enter symbol with which you want to make the shape");
    scanf("%c", &symbol);
    printf("Enter the row: ");
    scanf("%d", &row);
    printf(" enter position where you want to place your shape :");
    printf("press 1 for left , 2 for right , 3 for middle :");
    scanf("%d", &position);

    printf("Select the color of the square output:\n");
    printf("1. Red 2. Green,3. Blue,4. Yellow,5. Default (White)");

    printf("Enter your choice (1-5): ");
    scanf("%d", &color);

    switch (color)
    {
    case 1:
        changeTextColor(31); // Red
        break;
    case 2:
        changeTextColor(32); // Green
        break;
    case 3:
        changeTextColor(34); // Blue
        break;
    case 4:
        changeTextColor(33); // Yellow
        break;
    case 5:
    default:
        changeTextColor(0); // Default (White)
    }

    // left
    if (position == 1)
    {
        for (int i = 1; i <= row; i++)
        {
            for (int spc = 1; spc <= row - i; spc++)
            {
                printf(" ");
            }
            for (int k = 1; k <= i; k++)
            {
                if (k == row || k == 1 || k == i || i == row)
                    printf("%c ", symbol);
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    // right
    if (position == 2)
    {
        for (int i = 1; i <= row; i++)
        {
            printf("                                                                                                   ");
            for (int spc = 1; spc <= row - i; spc++)
            {
                printf(" ");
            }
            for (int k = 1; k <= i; k++)
            {
                if (k == row || k == 1 || k == i || i == row)
                    printf("%c ", symbol);
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    // middle
    if (position == 3)
    {
        for (int i = 1; i <= row; i++)
        {
            printf("                                                 ");
            for (int spc = 1; spc <= row - i; spc++)
            {
                printf(" ");
            }
            for (int k = 1; k <= i; k++)
            {
                if (k == row || k == 1 || k == i || i == row)
                    printf("%c ", symbol);
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
}
void main()
{
    int color;
    hollow_pyramid();
    changeTextColor(color);
}
