#include <stdio.h>

void row(int n, int i)
{
    if(i > n) return;

    space(n-i, 1);
    col(1, i);
    printf("\n");
    return row(n, ++i);
}

void space(int k, int j)
{
    if(j > k) return;
    else
    {
        printf(" ");
        return space(k, ++j);
    }
}
void col(int x, int m)
{
    if(x > m) return;
    else
    {
        if(x % 2 == 0)
        printf("B");
        else printf("A");
        return col(++x, m);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    row(n, 1);
}

