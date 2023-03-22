#include <stdio.h>

int fib(int a[], int n, int i)
{
    if(i == n) return 1;
    a[i] = a[i-1] + a[i-2];
    fib(a, n, ++i);
}
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);

    int a[n];
    a[0] = 0;
    a[1] = 1;

    fib(a, n, 2);

    for(i = 0; i < n; i++)
    {
        sum += a[i];
        printf("%d ", a[i]);
    }
    printf("%d ", sum);


}
