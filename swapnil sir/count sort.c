
#include<stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    countsorting(a,n,k);
    return 0;
}



void countsorting(int a[],int n,int k)
{
    int count[k+1];
    int i;
    int b[n];
    for(i=0;i<=k;i++)//initializing the count array with zeros
    {
        count[i]=0;
    }

    //store the number of occurance of each element in count array
    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }

    //update the count array

    for(i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];
    }

    //finding the index of each element and place the elements in the output array

    for(i=0;i<n;i++)
    {
        b[--count[a[i]]]=a[i];
    }

    //printing the output array


    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

}
