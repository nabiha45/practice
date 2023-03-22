#include <stdio.h>

int max = -99999;
int input(int ara[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    scanf("%d", &ara[i]);
    input(ara, n, i+1);
}

int check(int a[], int n, int i)
{
    if (i == n-1) return max;
    int b = gcd(a[i], a[i+1]);

    if (b > max) max = b;
    check(a, n, i+1);

}
int gcd (int a, int b)
{
    if (a == 0) return b;
    gcd(b%a, a);
}

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n];
    input (ara, n, 0);
    int res = check(ara, n, 0);
    printf("%d", res);

}
