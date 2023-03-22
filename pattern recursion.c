#include <stdio.h>

int printstar(int n)
{
    if (n < 1) return;
    printf("* ");
    printstar(n-1);
}
int star(int n) // n = 5 4 3 2 1 0
{
    if (n > 0)
    {
        star(n-1);
    }
    printstar(n);
    printf("\n");

}

int main()
{
    int n;
    scanf("%d", &n);

    star(n);

}
