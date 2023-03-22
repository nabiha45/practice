#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    printf("Value of x is %d\n", x);
    p = &x;
    *p = 20;
    printf("Value of x is %d\n ", x);

    x= 15;
    printf("%d\n", x);

    printf("Value stored at location %p is %d\n", p, *p);
    printf("Address is %p\n",&x);
    printf("Value of p is %d\n", p);

    }
