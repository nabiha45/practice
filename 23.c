#include <stdio.h>

int main()
{
    int a, b, n1, n2, r, gcd;

    scanf("%d %d", &a, &b);

    n1 = a;
    n2 = b;

    for(int i =1; n2 != 0; i++)
    {
        r = n1 % n2;

        n1 = n2;

        n2 = r;
    }

    gcd = n1;

    printf("%d", gcd);

    return 0;
}
