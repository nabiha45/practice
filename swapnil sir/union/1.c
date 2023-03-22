#include <stdio.h>

struct s1
{
    char ch;
    int x;
    char y;
}uv;
struct s2
{
    char c1;
    int n;
    char c2;
    double d;
    char c3;
    char c4;
} su;

int main()
/*{
    uv.ch = 'A';
    printf("uv.ch = %c\n", uv.ch);

    uv.x = 17;
    printf("uv.x = %d\n", uv.x);
    printf("uv.ch = %c\n", uv.ch);

    uv.y = 18;
    printf("uv.y = %d\n", uv.y);

    printf("uv.ch = %c\n", uv.ch);
    printf("uv.x = %d\n", uv.x);
} */
{
    printf("%d", sizeof(su));
}

