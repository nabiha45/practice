#include <stdio.h>

int f(int ara[],int i, int n)

{
    if (i == n)
    {
        return;
    }
    scanf("%d", &ara[i]);
    f(ara, i+1, n);

}
int f2(int arr[], int i, int n)
{
    if (i == n)
    {
        return;
    }
    printf("%d ", arr[i]);
    f2(arr, i+1, n);
}

int main()
{
    int ara[1000];
    int i = 0;
    int n;
    scanf("%d", &n);
    f(ara, i, n);
    f2(ara,i,n);

    return 0;
}
