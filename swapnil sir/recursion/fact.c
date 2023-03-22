#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int res = fact(n);
    printf("%d", res);
}
int fact(int x)
{
    if (x == 0) return 1;
    else return x*fact(x-1);
}

