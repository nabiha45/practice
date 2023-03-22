#include <stdio.h>

int main()
{
    int a = 5;
    int b = 40;
    int *p, *q;
    p = &a;
    q = &b;
    *p = *q;
    q = &a;
    *p = 17;
    *q = 15;

    printf("%d %d", *p, *q);
}
