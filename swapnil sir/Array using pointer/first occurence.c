#include <stdio.h>

int find(int a[], int lo, int hi, int k)
{
    if(a[0] == k) return 0;
    if(lo > hi) return -1;
        int mid = lo+hi/2;
        if(a[mid] == k && a[mid-1] != k) return mid;

    if(a[mid] > k) return find(a, lo, mid-1, k);
    if(a[mid] < k) return find(a, mid+1, hi, k);
}
int main()
{
    int i, n;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    int low = 0, high = n-1;

    int m = find(a, 0, n-1, x);

    printf("%d", m);
}
