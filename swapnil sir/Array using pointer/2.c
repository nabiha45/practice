#include <stdio.h>

int main()
{
    int *p, v = 3;

    p = &v;
    printf("%d\n", p);
    p++;
    printf("%d", p);
    return 0;
}
