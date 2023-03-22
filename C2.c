#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    // first half

    for (i = n; i >= 1; i--) // i = 4
    {
        for (j = n; j > i; j--) //i = 4
        {
            printf("%d ", j);
        }

        for (j = 1; j <= (2*i- 1); j++)
        {
            printf("%d ", i);
        }

        for (j = i+1 ; j <= n; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    for (i = 2; i <= n; i++) // i = 4
    {
        for (j = n; j > i; j--) //i = 4
        {
            printf("%d ", j);
        }

        for (j = 1; j <= (2*i- 1); j++)
        {
            printf("%d ", i);
        }

        for (j = i+1 ; j <= n; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }


    return 0;
}
