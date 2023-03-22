#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d", gcd(x, y));
}

int gcd (int a, int b)
{
    if (a == 0) return b;
    else gcd(b%a, a);
}
