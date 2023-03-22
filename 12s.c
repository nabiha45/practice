#include <stdio.h>

int main()
{
    int i, f, n, r, f1, f2;
    f = 1;
    f1 = 1;
    f2 = 1;

    scanf("%d %d", &n, &r);

    for(i = n; i != 0; i--)
    {
        f = f*i;
    }

    for(i = n-r; i != 0; i--)
    {
        f1 = f1*i;
    }

    for (i = r; i != 0; i--)
    {
        f2 = f2*i;
    }

    printf("%d", f/(f1*f2));

    return 0;
}
