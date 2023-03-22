#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    printf("Value of x is %d\n", x);

    p = &x;
    *p = 20;
    printf("Value of x is %d", x);

    }

