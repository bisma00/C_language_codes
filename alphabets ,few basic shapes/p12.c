// B
#include <stdio.h>
void print_B();
void changeTextColor(int);
void changeTextColor(int color)
{
    printf("\033[1;%dm", color);
}
void print_B()
{
    int size, color, position;
    char symbol;
    printf("enter symbol with which you wasizet to make the shape\n");
    scanf("%c", &symbol);
    printf("enter the size:\n");
    scanf("%d", &size);
    printf(" enter position where you want to place your shape :\n");
    printf("press 1 for left , 2 for right , 3 for middle :\n");
    scanf("%d", &position);

    printf("Select the color of the square output:\n");
    printf("1. Red 2. Green,3. Blue,4. Yellow,5. Default (White)");
    printf("enter your choice (1-5): ");
    scanf("%d", &color);

    switch (color)
    {
    case 1:
        changeTextColor(31); // Red
        break;
    case 2:
        changeTextColor(32); // Greesize
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

        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || (i == 1 || i == size / 2 || i == size) && j < size || j == size && (i != 1 && i != size / 2 && i != size))
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

        for (int i = 1; i <= size; i++)
        {
            printf("                                                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || (i == 1 || i == size / 2 || i == size) && j < size || j == size && (i != 1 && i != size / 2 && i != size))
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

        for (int i = 1; i <= size; i++)
        {
            printf("                                                 ");
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || (i == 1 || i == size / 2 || i == size) && j < size || j == size && (i != 1 && i != size / 2 && i != size))
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
    print_B();
    changeTextColor(color);
}