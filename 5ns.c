#include <stdio.h>

int main()
{
    int n, i, j, k;

    k = 0;

    int c = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            c++;

            if (c == 1)
            {
            printf("%d", j);
            }
            else
            {
                k = k +j;

                printf("%d ", k);
            }



        }

        k = 0;
        printf("\n");
    }

    return 0;
}
