#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int i;
    for(i = 0;i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp=0;
    int j;
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(i = 0;i < n; i++)
    {
        printf("%d ", a[i]);
    }

}
