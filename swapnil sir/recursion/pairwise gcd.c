#include <stdio.h>
int max = -999;
int check(int a[], int n, int i)
{
    if(i == n) return max;
    int b = gcd(a[i], a[i+1]);
    if(max < b) max = b;
    return check(a, n, ++i);
}

int gcd(int a, int b)
{
    if(a == 0) return b;
    return gcd(b%a, a);
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int m = check(a, n, 0);
    printf("%d", m);

}
