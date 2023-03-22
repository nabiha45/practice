#include <stdio.h>

int main()
{
    int n, i, sum, j;

    sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

         sum = sum + j;
        if (i % 2 == 0)
        {
            printf("-");

            j = (-1)*i;
        }

        else if (i != 1 && i % 2 == 1)
        {
            printf("+");

            j = i;


        }

        printf("%d", i);

    }

    printf("=%d", sum);

    return 0;
}
