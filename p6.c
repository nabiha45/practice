#include <stdio.h>

int main()
{
    int x = 10;

    int *p;
    p = &x;

    printf("Value of x %d\n", x);
    *p = 20;

    printf("Value of x is %d\n", x);
    printf("Address of x is %p", &x);
    printf("Value of p is %p\n", p);
    return 0;

}
