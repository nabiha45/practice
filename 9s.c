#include <stdio.h>

int main()
{
    int n, i;

    int p = 0;

    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        printf("%d x %d+", i, i);

        p += i*i;
    }

    p += i*i;

    printf("%d x %d= %d", i, i, p);
}
