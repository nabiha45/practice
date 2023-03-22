#include <stdio.h>

int main()
{

    int x, n;
    scanf("%d %d", &x, &n);

    int res = p(x, n, 1);
    printf("%d", res);

}
int p(int x, int n, int i)
{
    if(i > n) return 1;

        return x*p(x, n, ++i);

}
