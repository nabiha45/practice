#include <stdio.h>

int main()
{
    int b;
    int *p;
    p = &b;
    b = 10;
    printf("%d", *p);
}
