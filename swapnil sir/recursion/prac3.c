#include <stdio.h>

void row(int n, int i)
{
    if (i == n) return;
    space(n-i, 0);
    value(n, i, 0);
    printf("\n");
    row(n, ++i);
}

void space(int x, int j)
{
    if(j == x) return;
    printf(" ");
    return space(x, ++j);
}

void value(int n, int i, int j)
{
    if(j > i) return;
    int rr = ncr(i, j);
    printf("%d ", rr);
    value(n, i, ++j);
}
int ncr(int n, int r)
{
    int a = fact(n) / (fact(n-r)*fact(r));
    return a;
}
int fact(int n)
{
    if(n == 0) return 1;
    return n*fact(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    row(n, 0);
    return 0;
}
