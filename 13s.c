#include <stdio.h>

int main()
{
    int n, i, p;

    p = 1;


    scanf("%d", &n);

    for (i = 1; i <=n; i++)
    {
        p = p*2;
    }

    printf("%d", p);

    return 0;
}
