#include<stdio.h>
int main()
{
    int n,arr[100],i,j,temp;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0,j=(n-1); i<n; i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(j=(n-1); j>=0; j--)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}
