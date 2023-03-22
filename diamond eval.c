#include <stdio.h>

int main()
{
    int n, row, col, a;



    scanf("%d", &n);
     a = (n+1)/2;

    for (int i = 1; i <= n; i++)
    {
        row = i;

        if (i > a)
        {
            row = n - i +1;

        }

        for (int j = 1; j <= (n/2)+row; j++)
        {
            col = j;

            if (col <= ((n+1)/2 - row))
            {
                printf(" ");

            }
            else
            {
                printf("*");
            }

        }
        printf("\n");
    }
    return 0;
}
