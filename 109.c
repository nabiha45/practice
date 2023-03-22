#include <stdio.h>

int main()
{
    int n, c, a, b;
    c = 0;

    scanf("%d", &n);
    int arr[n+1];
    int i, j, temp;
    temp = 0;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[1];
    int min = arr[1];
    for (i = 1; i <=n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    if (arr[1] == max && arr[n] == min)
    {
        printf("yes\n");
        printf("1 %d", n);
    }

    else
    {

    for (i = 1; i <= n; i++)
    {
        for (j = i+1; j <= n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                c++;
                a = i;
                b = j;
            }
        }

    }
    if (c == 1)
    {
        printf("yes\n");
        printf("%d %d", a, b);
    }
    else if (c == 0)
    {
        printf("yes\n");
        printf("1 1");
    }
    else
    {
        printf("no");
    }
    }


    return 0;
}
