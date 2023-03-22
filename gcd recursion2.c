#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    gcd(b%a, a);
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int r = gcd(m,n);
    printf("%d", r);

}
