#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i, c= 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int j, temp = 0;
    for(i = 1; i < n; i++)
    {
        for(j = 0; j < n-i; j++)
        {
            if(a[j] >= a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                c++;
            }
        }
    }
    printf("%d", c);
}
