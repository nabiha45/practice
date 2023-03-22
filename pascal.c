#include <stdio.h>

void row (int n, int i)
{
    if (i == n) return;
    space(i,j,n);
    value (i, j, n);
}

void space (int i, int j, int n);
{
    if (j = n-i) return;
    printf(" ");
    space(i, ++j, n);
}




int main()
{
    int n, i = 0, j = 0;
    scanf("%d", &n);
    row(i,n);
    return 0;
}


