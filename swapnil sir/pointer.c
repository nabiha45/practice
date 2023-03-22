#include <stdio.h>

int main()
{

    int *p, *q;
    int a = 5;
    int b = 40;
    p = &a;
    q = &b;
    *q = 13;

    printf("%d %d %d %d", *p, *q, a, b);
}
