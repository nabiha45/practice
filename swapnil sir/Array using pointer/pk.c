#include<stdio.h>

int main()
{
    int s;
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    int p,k,n;
    scanf("%d %d %d",&p,&k,&n);
    printf("%d", newarr(a,p,n,k));
    return 0;

}


int newarr(int a[],int p,int n,int k)
{
    while(n!=0)
    {
        a[k]=p;
        k++;
        n--;
        return a[k];
    }


}
