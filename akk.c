#include<stdio.h>
int main()
{
    int n,k,i,j;
    scanf("%d%d",&n,&k);// n=num of array //k== num of roatation
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<k; i++)
    {
        int temp=arr[0];
        for(j=0; j<n-1; j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;

    }
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
