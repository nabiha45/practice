#include <stdio.h>
int c = 0;

int input (int a[], int n, int i)
{
    if (i == n) return 1;
    scanf("%d", &a[i]);
    input(a, n, i+1);
}
int fib(int f[], int n, int i)
{
    if (i == n) return 1;
    f[i] = f[i-1] + f[i-2];
    return fib(f, n, i+1);
}
int count (int a[], int f[], int n, int i)
{
    if (i == n) return c;
    int flag = check(a[i], f, 0);
    if (flag == 1) c++;
    return count(a, f, n, i+1);

}
int check(int a, int f[], int i)
{
    if (a==f[i]) return 1;
    if (i == 20) return 0;
    return check(a, f, i+1);
}

int main()
{
    int n, i =0;
    scanf("%d", &n);
    int arr[n];
    input(arr, n, 0);
    int f[20];
    f[0] = 0;
    f[1] = 1;
    fib(f, 20, 2);
    int res = count (arr, f, n, i);
    printf("%d", res);
}
