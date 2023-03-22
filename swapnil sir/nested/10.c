#include<stdio.h>
int main()
{
    int a,b,c,i,j,n;
    int facn=1,facnr=1,facr=1;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=1;j<n-i;j++) printf(" ");
        for(j=0;j<=i;j++)
        {
            facn=1;
            facnr=1;
            facr=1;
            for(a=i;a>0;a--) facn=facn*a;
            for(a=j;a>0;a--) facr=facr*a;
            for(a=i-j;a>0;a--) facnr=facnr*a;
            printf("%d ", facn/(facr*facnr));
        }
        printf("\n");
    }
}
