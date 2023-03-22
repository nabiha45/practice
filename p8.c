#include <stdio.h>

int main()
{
    int x = 10;
    int y;
    int *p;

    printf("value of x is %d\n", x);
    p = &x;

    y = *p;
    *p = 15;

    printf("value of x is %d\n", x);
    printf("%d", y);
}
