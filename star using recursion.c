#include <stdio.h>

void row(int n, int i) // n = 5 1
{
    if (i > n) return; // no
    col(i, 1);
    printf("\n");
     // 0 0
    return row(n, ++i); // 5 1

}
void col(int i, int j)
{
    if (j > i) return;
    printf("*");
    return col(i, ++j);
}
int main()
{
    int n;
    scanf("%d", &n);
    row(n, 1);

}
