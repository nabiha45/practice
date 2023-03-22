#include <stdio.h>

int main()
{
    int n, i, j, count = 0, c, a;
    scanf("%d", &n);
    for(a = n; a != 0; a/=10)
    {
        count++;
    }
    for (i = 1; i <= count; i++)
    {
        c = n;
        for(j = 1; j <= count - i; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            printf("%d", c%10);
            c/=10;
        }
        printf("\n");
    }
}
