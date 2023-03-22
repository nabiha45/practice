#include <stdio.h>

int input (int a[], int i, int n)
{
    if(i == n) return 1;
    else
    {
        scanf("%d", &a[i]);
        return input (a, ++i, n);
    }
}
int max = -9999;
int find(int a[], int i, int n)
{
    if(i == n) return max;
    else
    {
        if(a[i] > max)
        {
            max = a[i];
            return find(a, ++i, n);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    input(a, 0, n);
    int m = find(a, 0, n);
    printf("%d ", m);
}
