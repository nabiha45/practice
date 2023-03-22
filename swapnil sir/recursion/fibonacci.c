#include <stdio.h>
int c = 0;
void fib (int f[], int n, int i)
{
    if(i == n) return 1;
    f[i] = f[i-1] + f[i-2];
    // printf("%d ", f[i]);
    fib(f, n, ++i);
}
int check (int a, int f[], int i)
{
    if(a == f[i]) return 1;
    if(i == 20) return 0;
    return check(a, f, ++i);
}


int count(int a[], int n, int i, int f[])
{
    if(i == n) return c;
    int flag = check(a[i], f, 0);
    if(flag == 1) c++;
    return count(a, n, ++i, f);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int f[20];
    f[0] = 0;
    f[1] = 1;
    fib(f, 20, 2);
    int m = count(a, n, 0, f);
    printf("%d", m);
}
