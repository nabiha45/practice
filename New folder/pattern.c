#include <stdio.h>

int row(int n, int i)
{
    if (i > n) return;
    col(i, 1);
    printf("\n");
    return row(n, ++i);
}
int col(int i, int j)
{
    if(j>i) return;
    printf("*");
    col(i, ++j);

}

int main()
{
    int n;
    scanf("%d", &n);

    row (n, 0);

}
