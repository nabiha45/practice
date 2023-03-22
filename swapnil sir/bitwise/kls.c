#include <stdio.h>

int pal(int n, int i)
{
    if (n == 0) return i;
    i = n % 10 + i*10;
    pal(n/10, i);
}


int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int a = pal(n, i);
    if (a == n)
    {
        printf("Yes");
    }
}
