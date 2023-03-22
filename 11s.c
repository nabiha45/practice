#include <stdio.h>

int main()
{
    int n, i, p;

    scanf("%d", &n);

    p = 1;

    for(i = n; i != 0; i--)
    {
        printf("%d", i);

        p = p*i;

        if (i == 1)
        {
            printf("=");
        }

        else
        {
            printf("x");
        }
    }

    printf("%d", p);

    return 0;
}
