// tree

#include <stdio.h>

void main()
{
  tree();
  hollow_tree();
}

void changeTextColor(int color)
{
  printf("\033[1;%dm", color);
}
void tree()
{

  int n, outlinecolor, fillcolor, position;
  char symbol;
  printf("enter symbol with which you want to make the shape");
  scanf("%c", &symbol);

  printf("enter size:");
  scanf("%d", &n);
  printf(" enter position where you want to place your shape :");
  printf("press 1 for left , 2 for right , 3 for middle :");
  scanf("%d", &position);

  printf("Select the color of the outline:\n");
  printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

  printf("Enter your choice (1-5): ");
  scanf("%d", &outlinecolor);

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
  if (position == 1)
  {
    for (int i = 1; i <= n; i++)
    {
      // Print spaces before the stars
      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }

      // Print stars
      for (int j = 1; j <= 2 * i - 1; j++)
      {
        if (j == 1 || i == n || j == 2 * i - 1)
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

      // Move to the next line
      printf("\n");
    }
    // for middle part

    for (int i = 4; i <= n; i++)
    {
      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        if (i == n || k == 1 || k == 2 * i - 1)
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

    // for last tripo
    for (int i = 4; i <= n; i++)
    {
      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        if (i == n || k == 1 || k == 2 * i - 1)
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

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);
  }

  // right
  if (position == 2)
  {
    for (int i = 1; i <= n; i++)
    {
      printf("                                                                                                   ");

      // Print spaces before the stars
      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }

      // Print stars
      for (int j = 1; j <= 2 * i - 1; j++)
      {
        if (j == 1 || i == n || j == 2 * i - 1)
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

      // Move to the next line
      printf("\n");
    }
    // for middle part

    for (int i = 4; i <= n; i++)
    {
      printf("                                                                                                   ");

      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        if (i == n || k == 1 || k == 2 * i - 1)
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

    // for last tripo
    for (int i = 4; i <= n; i++)
    {
      printf("                                                                                                   ");

      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        if (i == n || k == 1 || k == 2 * i - 1)
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

    printf("                                                                                                   ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    printf("                                                                                                   ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    printf("                                                                                                   ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    printf("                                                                                                   ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);
  }

  // middle
  if (position == 3)
  {

    for (int i = 1; i <= n; i++)
    {
      printf("                                                 ");

      // Print spaces before the stars
      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }

      // Print stars
      for (int j = 1; j <= 2 * i - 1; j++)
      {
        if (j == 1 || i == n || j == 2 * i - 1)
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

      // Move to the next line
      printf("\n");
    }
    // for middle part

    for (int i = 4; i <= n; i++)
    {
      printf("                                                 ");

      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        if (i == n || k == 1 || k == 2 * i - 1)
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

    // for last tripo
    for (int i = 4; i <= n; i++)
    {
      printf("                                                ");

      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        if (i == n || k == 1 || k == 2 * i - 1)
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

    printf("                                                 ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    printf("                                                 ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    printf("                                                 ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    printf("                                                 ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);
  }
}

// hollow tree

void hollow_tree()
{
  int n, outlinecolor, fillcolor, position;
  char symbol;
  printf("enter symbol with which you want to make the shape");
  scanf("%c", &symbol);

  printf("enter size:");
  scanf("%d", &n);
  printf(" enter position where you want to place your shape :");
  printf("press 1 for left , 2 for right , 3 for middle :");
  scanf("%d", &position);

  printf("Select the color of the outline:\n");
  printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

  printf("Enter your choice (1-5): ");
  scanf("%d", &outlinecolor);

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

  if (position == 1)
  {
    for (int i = 1; i <= n; i++)
    {
      // Print spaces before the stars
      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }

      // Print stars
      for (int j = 1; j <= 2 * i - 1; j++)
      {
        if (j == 1 || i == n || j == 2 * i - 1)
        {
          changeTextColor(outlinecolor);
          printf("%c", symbol);
        }
        else
        {
          printf(" ");
        }
      }

      // Move to the next line
      printf("\n");
    }
    // for middle part

    for (int i = 4; i <= n; i++)
    {
      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        if (i == n || k == 1 || k == 2 * i - 1)
        {
          changeTextColor(outlinecolor);

          printf("%c", symbol);
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }

    // for last tripo
    for (int i = 4; i <= n; i++)
    {
      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        if (i == n || k == 1 || k == 2 * i - 1)
        {
          changeTextColor(outlinecolor);

          printf("%c", symbol);
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);
  }

  // right
  if (position == 2)
  {
    for (int i = 1; i <= n; i++)
    {
      printf("                                                                                                   ");

      // Print spaces before the stars
      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }

      // Print stars
      for (int j = 1; j <= 2 * i - 1; j++)
      {
        if (j == 1 || i == n || j == 2 * i - 1)
        {
          changeTextColor(outlinecolor);
          printf("%c", symbol);
        }
        else
        {
          printf(" ");
        }
      }

      // Move to the next line
      printf("\n");
    }
    // for middle part

    for (int i = 4; i <= n; i++)
    {
      printf("                                                                                                   ");

      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        if (i == n || k == 1 || k == 2 * i - 1)
        {
          changeTextColor(outlinecolor);

          printf("%c", symbol);
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }

    // for last tripo
    for (int i = 4; i <= n; i++)
    {
      printf("                                                                                                   ");

      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        if (i == n || k == 1 || k == 2 * i - 1)
        {
          changeTextColor(outlinecolor);

          printf("%c", symbol);
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }

    printf("                                                                                                   ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    printf("                                                                                                   ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    printf("                                                                                                   ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    printf("                                                                                                   ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);
  }

  // middle
  if (position == 3)
  {

    for (int i = 1; i <= n; i++)
    {
      printf("                                                 ");

      // Print spaces before the stars
      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }

      // Print stars
      for (int j = 1; j <= 2 * i - 1; j++)
      {
        if (j == 1 || i == n || j == 2 * i - 1)
        {
          changeTextColor(outlinecolor);
          printf("%c", symbol);
        }
        else
        {
          printf(" ");
        }
      }

      // Move to the next line
      printf("\n");
    }
    // for middle part

    for (int i = 4; i <= n; i++)
    {
      printf("                                                 ");

      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        if (i == n || k == 1 || k == 2 * i - 1)
        {
          changeTextColor(outlinecolor);

          printf("%c", symbol);
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }

    // for last tripo
    for (int i = 4; i <= n; i++)
    {
      printf("                                                ");

      for (int j = 1; j <= n - i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <= 2 * i - 1; k++)
      {
        if (i == n || k == 1 || k == 2 * i - 1)
        {
          changeTextColor(outlinecolor);

          printf("%c", symbol);
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }

    printf("                                                 ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    printf("                                                 ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    printf("                                                 ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);

    printf("                                                 ");

    for (int i = 1; i <= n - 1; i++)
    {
      printf(" ");
    }

    changeTextColor(fillcolor);
    printf("%c \n", symbol);
  }
}