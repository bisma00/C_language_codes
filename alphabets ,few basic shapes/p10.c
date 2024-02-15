//  hollow inverted pyramid
#include <stdio.h>
void hollowinvertpyramid();
void changeTextColor(int);
void changeTextColor(int color)
{
    printf("\033[1;%dm", color);
}
void hollowinvertpyramid()
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
            for (int sp = 1; sp <= i - 1; sp++)
            {
                printf(" ");
            }
            for (int j = 1; j <= row * 2 - (2 * i - 1); j++)
            {
                if (i == 1 || j == 1 || j == row * 2 - (2 * i - 1))
                    printf("%c", symbol);
                else
                    printf(" ");
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
            for (int sp = 1; sp <= i - 1; sp++)
            {
                printf(" ");
            }
            for (int j = 1; j <= row * 2 - (2 * i - 1); j++)
            {
                if (i == 1 || j == 1 || j == row * 2 - (2 * i - 1))
                    printf("%c", symbol);
                else
                    printf(" ");
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
            for (int sp = 1; sp <= i - 1; sp++)
            {
                printf(" ");
            }
            for (int j = 1; j <= row * 2 - (2 * i - 1); j++)
            {
                if (i == 1 || j == 1 || j == row * 2 - (2 * i - 1))
                    printf("%c", symbol);
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
}
int main()
{
    int color;
    hollowinvertpyramid();
    changeTextColor(color);
}