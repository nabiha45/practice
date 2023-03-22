#include <stdio.h>

int main()
{
    int n, c;
    c = 0;

    scanf("%d", &n);
    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if ((arr[i] == 10 || arr[i] == 1) && arr[i] != arr[i+1])
        {
            c++;
        }
    }

    printf("%d", c);

    return 0;


}
