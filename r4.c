#include <stdio.h>

void star(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("*");
    }
}

int main()
{
    int i;
    for (i = 4; i >= 1; i--)
    {
    star(i);
    printf("\n");
    }
    return 0;
}
