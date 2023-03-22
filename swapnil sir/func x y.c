#include <stdio.h>

int main()
{
    int x, y, n, z;
    scanf("%d %d %d", &x, &y, &n);
    z = function(x, y, n);
    printf("%d", z);

    return 0;
}
int function (int x, int y, int n)
{
    int mul = 1, i;

    for(i = 1; i <= n; i++)
    {
        mul = mul*x;
    }
    return mul+y*y;
}
