#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, m, j = 0, k;
    for(i = n; i != 0; i/=10)
    {
        m = i%10;
        j = j*10 + i%10;

    }

    k = -(n-j) / 9;
    printf("|%d - %d|= 9 x %d", n, j, k);
}
