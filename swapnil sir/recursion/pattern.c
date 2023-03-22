#include <stdio.h>

void row(int n, int i)
{
    if(i > n) return;



        col(i, 1);
        printf("\n");
        return row(n, ++i);

}
void col(int i, int j)
{
    if(j > i) return;

        printf("%d", j);
        return col(i, ++j);

}

int main()
{
    int n;
    scanf("%d", &n);
    row(n, 1);
}


