#include <stdio.h>

int main()

{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c && (a == b))
    {
        printf("A and B are bigger");
    }
    else if(a ==c)
    {
        printf("A and C are bigger");
    }

    else if(b >= c && b == c)
    {
        printf("B and C are bigger");
    }
    else if(b == a)
    {
        printf("B and A are bigger");
    }
    return 0;
}
