#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mul = fact(n);
    printf("%d", mul);
}

int fact(int n)
{
    int m = 1, i;
    for(i = 2; i <= n; i++)
    {
        m = m*i;
    }
    return m;
}
