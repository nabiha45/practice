#include <stdio.h>

int main()
{
    int i, n, o, e;
    o = 0;
    e = 0;
    int temp1, temp2;

    scanf("%d", &n);
    int arr[n];
    int diff[100];

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for (i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            e++;
            temp1 = i;
        }
        else
        {
            o++;
            temp2 = i;
        }
    }

    if (o == 1)
    {
        printf("%d", temp2);
    }
    else
    {
        printf("%d", temp1);
    }



    return 0;
}
