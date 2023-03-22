#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int i, p;

    p = 1 ;

    for (i = 1; i <= n; i++)
    {
        p = p*m;
    }

    printf("%d", p);

    return 0;

}
