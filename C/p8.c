#include <stdio.h>

int main()
{
    char c1 = 'A', c2 = 'B', c3 = 'C';
    char *p1, *p2, *p3;

    p3 = &c3;
    p2 = &c2;
    p1 = &c1;

    char a, b, c;

    a = *p1;
    b = *p2;
    c = *p3;


    printf("%c %c %c", a, b, c);
}
