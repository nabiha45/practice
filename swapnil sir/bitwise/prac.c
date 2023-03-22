#include <stdio.h>

int main()
{
    int n, i, j, row, col;
    scanf("%d", &n);

    for(i = 1; i <= 2*n; i++)
    {
        row = i;
        if(i > n)
        {
            row = n - (i - n);
        }
        for(j = 1; j <= n+row-1; j++)
        {
            if (j < n-row+1)
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
}
