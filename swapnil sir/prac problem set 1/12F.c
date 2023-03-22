#include <stdio.h>

int main()
{
    int n, c, r, mul = 1;
    scanf("%d %d", &n, &r);
    int m2=1, m3=1;
    int i;
    for (i = n; i >= 1; i--)
    {
        mul*= i;
    }
    for(i = n-r; i >= 1; i--)
    {
        m2 *= i;
    }
    for(i = r; i >= 1; i--)
    {
        m3*= i;
    }
    printf("%d", mul/(m2*m3));
}
