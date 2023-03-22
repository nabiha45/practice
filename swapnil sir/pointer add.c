#include <stdio.h>

int main()
{
    int *p, *q;
    int a, b;
    scanf("%d %d", &a, &b);
    p = &a;
    q = &b;

    printf("sum = %d", *p+*q);
}
