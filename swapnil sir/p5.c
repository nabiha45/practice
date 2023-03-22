#include <stdio.h>

int main()
{
    int m = 10;
    int *z;
    z = &m;

    printf("z stores the address of m = %p\n", z);
    printf("%d is the value", *z);
}
