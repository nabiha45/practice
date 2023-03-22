#include <stdio.h>

int main()
{
    int s;
    scanf("%d", &s);
    int a[s];
    int i;
    for(i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }
    int p, k, n;
    scanf("%d %d %d", &p, &k, &n);
    printf("%d", newarra(a, p, k, n, 0));


}
int newarra(int a[], int p, int k, int n, int i)
{
    if(i > n) return k-1;
        a[k] = p;
        newarra(a, p, ++k, n, ++i);
}
