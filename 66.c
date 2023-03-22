#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n); //n = 5
    int ip[100];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ip[i]); // 1 2 3 4 5 6
    }
    int max=ip[0]; // max = 1
    for(i=1; i<n; i++)
    {
        if(ip[i]>max)
        {
            max=ip[i]; // max = 6
        }
    }
    int arr[max+1];
    for(i=0; i<=max; i++)
    {
        arr[i]=0;
    }
    for(i=0; i<=max; i++)
    {
        arr[ip[i]]+=1;
    }
    int count=0;
    for(j=max;j>=0;j--)///to find the nth maximum we run the loop from max to zero.
    {
        if(arr[j]>0)
        {
            count++;
        }
        if(count==3)
        {
            printf("3rd maximum is %d\n",j);
            break;
        }
    }
    for(j=0;j<=max;j++)///to find the nth minimum we run the loop from zero to max.
    {
        if(arr[j]>0)
        {
            count++;
        }
        if(count==3)
        {
            printf("3rd minimum is %d\n",j);
            break;
        }
    }
    return 0;
}
