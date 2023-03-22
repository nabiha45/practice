#include<stdio.h>
int main()
{
    int n,i,j,k,x,a=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(k=0;k<=i;k++)
        {
            if(k==0 || i==0)
            {
                a=1;
            }
            else
            {
                a=a*(i-k+1)/k;
            }
            printf("%4d ",a);
        }
        printf("\n");
    }
    return 0;
}
