// NULL POINTER

#include <stdio.h>

int main()
{

    int x = 100;
    int *p = NULL;

    printf("x : %d\n", x);

    p = &x;
    printf("%d\n", *p);
    return 0;
}
