#include<stdio.h>

int main()
{
    int n;int j,i,m=1;
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {


        for(int k=1;k<=n-i;k++)
        {
            printf(" ");

        }
        int c=2*i-1;
        m=1;
        for(j=1;j<=c;j++)
        {
            if(j<=(i))
            {
                printf("%d",m);
                m++;
            }

            else{

                printf("%d",m-2);
                m--;
            }
        }
        printf("\n");
    }
}
