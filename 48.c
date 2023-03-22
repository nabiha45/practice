#include<stdio.h>
int main()
{
    int n,i,j,temp;

    int arr[100];

    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0,j=(n-1); i < n; i++,j--)

    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    for(i=(n-1); i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
