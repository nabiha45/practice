#include <stdio.h>

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
    int temp;
    int b[n];
    int j = 0;
    for(i = n-1; i >= 0; i--)
    {
        temp = a[i];
        b[j++] = temp;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d", b[i]);
    }

}
