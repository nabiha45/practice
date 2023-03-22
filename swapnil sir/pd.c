#include <stdio.h>

void row(int n, int i)
{
    if (i == n) return;
    space(n-i, 0);
    value(n, i, 0);
    printf("\n");
    row(n, ++i);
}
void space(int n, int i)
{
    if(i == n) return;
    printf(" ");
    space(n, ++i);
}
void value (int n, int i, int j)
{
    if(j > i) return;
    int r = ncr(i, j);
    printf("%d ", r);
    value (n, i, ++j);
}

int ncr(int n, int r)
{
    int a = fact(n) / (fact(r)*fact(n-r));
    return a;
}
int fact(int n)
{
    if(n == 0) return 1;
    return n*fact(n-1);
}



int main()
{
    int n, i = 0, j;
    scanf("%d", &n);
    row(n, i);
}
