#include <stdio.h>

int main()
{
    int n, a, b, i, j;

    scanf("%d %d %d", &n, &a, &b);

    i = a*b;

    j = i * n;

    printf("%d", j*2);

    return 0;
}
