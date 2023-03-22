#include <stdio.h>

int main()
{
    char c = 'A';
    char *p, **q;

    p = &c;
    q = &p;

    **q = 'B';

    printf("Value of c %c\n", c);
    printf("Vakue of c is %c\n", *p);
    printf("Vakue of c is %c\n", **q);

}
