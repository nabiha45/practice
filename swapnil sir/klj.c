#include <stdio.h>

int power (int n, int i)
{
    if(i > n) return 1;
    return n*power(n, ++i);
}
 int s = 0;
int sum (int x, int y)
{

    if(y == 0) return s;
    s+= power(x, 1);
    return sum(--x, --y);
}


int main()
{

    int n;
    scanf("%d", &n);
    int i;
    printf("%d", sum(n, n));

}
