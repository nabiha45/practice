#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int A[n];

    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i+=2)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
