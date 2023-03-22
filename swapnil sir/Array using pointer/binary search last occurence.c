#include<stdio.h>

int find(int a[], int low, int high, int k);

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
    int low=0;
    int high=n-1;
    printf("%d",find(a,0,n-1,k));
    return 0;
}
int find(int a[],int low,int high,int k)
{
    if(a[0]==k)return 0;
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(a[mid]==k&&a[mid+1]!=k) return mid;
    if(a[mid]==k&&a[mid+1]==k)
    {
        int t;
        //printf("%d",t);
        for(int i=mid+1;i<=high;i++)
        {

            if(a[i]!=k){

             return t;
            }
            if(i==high) return i;
            if(a[i]==k)
            {
                t=i;
                continue;
            }
        }
    }
    else if(a[mid]<k){
        return find(a,mid+1,high,k);
    }
    else return find(a,low,mid-1,k);
}
