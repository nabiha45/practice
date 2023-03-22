#include <stdio.h>

int main()
{
    int max = -999;
    int min = 999;
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    printf("%d %d", max, min);


}
