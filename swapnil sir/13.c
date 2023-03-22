#include <stdio.h>

int find(int a[], int low, int high, int x)
{
    if(a[0] == x) return 0;
    else if (low > high) return -1;
    int mid = (low+high)/2;
    if(a[mid] == x && a[mid+1] != x) return mid;
    if(a[mid] == x && a[mid+1] == x)
    {
        int t;
        for(int i = mid+1; i <= high; i++)
        {
            if(a[i] != x)
            {
                return t;
            }
            if(i == high) return i;
            if(a[i] == x)
            {
                t=i;
                continue;
            }
        }
    }
    else if(a[mid] > x) return find(a, low, mid-1, x);
    else if (a[mid] < x) return find(a, mid+1, high, x);
}

int main()
{
    int n, i, high, low;
    scanf("%d", &n);
    int a[n];


    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    low = 0;
    high = n-1;
    int x;
    scanf("%d", &x);
    int m = find(a, low, high, x);
    printf("%d", m);
}
