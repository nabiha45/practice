#include <stdio.h>

int input(int ara[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    scanf("%d", &ara[i]);
    input(ara, n, i+1);
}

int count (int a[], int n, int c, int i)
{
    if (i == n)
        return c;
    int ff = check(a[i], a[i]-1);
    if (ff == 1)
    {
        c++;
    }
    return count(a, n, c, i+1);
}

int check(int n, int i)
{
    if (n ==1) return 0;
    if (i == 1)
    {
        return 1;
    }
    if (n%i == 0) return 0;
    return check(n, --i);
}

int main()
{
    int n, c = 0;
    scanf("%d", &n);
    int arr[n];
    input(arr, n, 0);

    int ans = count(arr, n, c, 0);
    printf("%d", ans);
    return 0;

}
