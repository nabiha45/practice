#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);



    for (i = 1; i <= n; i++)
    {
        if ( n == 1)
        {
            printf("I hate it");
            break;
        }

        if (i == 1)
        {
            printf("I hate ");
        }
        if (i % 2 == 0 && i != 1 && i == n)
        {
            printf("that I love it ");
        }
        if (i % 2 != 0 && i != 1 && i == n)
        {
            printf("that I hate it ");
        }
        if (i % 2 == 0 && i != 1 && i != n)
        {
            printf("that I love ");
        }
        if (i % 2 != 0 && i != 1 && i != n)
        {
            printf("that I hate ");
        }
    }

    return 0;
}
