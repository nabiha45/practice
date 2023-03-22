#include<stdio.h>
int main()
{
    long long n,i,j,m,x,y;
    scanf("%lld",&n);
    long long a[n+1],b[n+1];
    for(i=1,j=n; i<=n,j>0; i++,j--)
    {
        scanf("%lld",&x);
        a[x]=i;
        b[x]=j;
    }
    scanf("%lld",&m);
    long long c[m+1];
    for(i=1; i<=m; i++)
    {
        scanf("%lld",&c[i]);
    }
    long long g=0,h=0;
    for(i=1; i<=m; i++)
    {
        g+=a[c[i]];
        h+=b[c[i]];
    }
    printf("%lld %lld\n",g,h);
    return 0;
}
