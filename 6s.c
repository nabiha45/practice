#include <stdio.h>

int main()
{
    int n, i, a;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for(a = 1; a <= n; a++)
        {
            if (a % 2 == 0)
            {
                printf("0");
            }

            else
            {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}

