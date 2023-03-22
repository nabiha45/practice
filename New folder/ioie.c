#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i;
    int arr[101];
    int a = 4;
    int b = 9;



    for (i = 0; i < n; i++)
    {
        if (i%2 == 0)
        {
            arr[i] = a;
            a++;
        }
        if (i % 2 != 0)
        {
            arr[i] = b;
            b++;
        }

        if (a == 100 || b == 100)
        {
            a = 1;
            b = 10;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
