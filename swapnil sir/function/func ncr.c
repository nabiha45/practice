#include <stdio.h>

int main()
{

    int m, k;
    scanf("%d %d", &m, &k);
    int res = c(m, k);
    printf("%d",res);
    return 0;
}
int f (int n)
{
    int mul = 1, i;
    for(i = 2; i <= n; i++)
    {
        mul = mul*i;
    }
    return mul;
}
int c(int n, int r)
{
    int x = f(n);
    int y = f(n-r);
    int z = f(r);
    return x/y*z;
}
