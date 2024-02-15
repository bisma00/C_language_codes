#include <stdio.h>

int main()
{
    int ctr, stno, enno;

    printf("Input starting number of range: ");
    scanf("%d", &stno);

    printf("Input ending number of range : ");
    scanf("%d", &enno);
    for (int n = stno; n <= enno; n++)
    {
        ctr = 0;

        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                ctr++;
                break;
            }
        }

        if (ctr == 0 && n != 1)
            printf("%d ", n);
    }
    printf("\n");
    return 0;
}