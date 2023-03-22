#include <stdio.h>

int row(int n, int i)
{
    if (i > n) return;
    col (i, 0);
    printf("\n");
    return row(n, ++i);
}
int col(int i, int j)
{
    if (j == i) return;
    printf("*");
    return col(i, ++j);
}
int main()
{
    int n;
    scanf("%d", &n);
    row(n, 0);

}
