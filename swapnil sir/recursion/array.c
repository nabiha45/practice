#include <stdio.h>

int input(int a[], int i, int n)
{
    if(i == n) return 1;
    else
    {
        scanf("%d", &a[i]);
        return input(a, ++i, n);
    }
}
int reverse(int a[], int i, int n)
{
    if (i < 0) return 1;
    else
    {
        printf("%d ", a[i]);
        reverse(a, --i, n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    input(a, 0, n);
    int i;
    reverse(a, n-1, n);
}
