#include <stdio.h>

int main()
{
    int *p, **f;
    int a = 3;
    p = &a;
    *p = 5;

    f = &p;
    **f = 20;
    printf("%d", a);

}
