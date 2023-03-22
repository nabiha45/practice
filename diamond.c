#include <stdio.h>

int main()
{
    int n, row, col;

    scanf("%d", &n);

    for (int i = 1; i <= 2*n; i++)
    {
        row = i;

        if (i > n) // n = 3
        {
            row = n - (i-n);
        }

        for(int j = 1; j <= n+row-1; j++)
        {
            col = j;
            if (col < n-row+1)
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
