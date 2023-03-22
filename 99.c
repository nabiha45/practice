#include <stdio.h>

int main()
{
    int i, j, n;
    n = 0;

    int arr[4];

    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = i+1; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
                n++;
            }

        }
        if (n == 3 || n == 2)
        {
            break;
        }
    }

    printf("%d", n);
    return 0;
}
