#include <stdio.h>

int main()
{
    char c1 = 'A';
    char c2 = 'B';
    int n1 = 10;
    int n2 = 11;
    printf("%c %p\n", c1, &c1);
    printf("%c %p\n", c2, &c2);
    printf("%d %p\n", n1, &n1);
    printf("%d %p\n", n2, &n2);
}
