#include <stdio.h>

int main()
{
    int num;
    char ch;
    double d;
    float f;

    printf("%lu\n", sizeof(int));
    printf("size of int %d\n", sizeof(num));
    printf("size of char %d\n", sizeof(ch));
    printf("size of double %d\n", sizeof(d));
    printf("size of float %d\n", sizeof(f));
    return 0;
}
