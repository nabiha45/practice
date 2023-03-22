#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,row,col,a;
    scanf("%d",&n);
    a=(n+1)/2;
    for (int i = 1; i <=2*a-1; i++)
    {
        row=i;
        if(i>a)
        {
            row=2*a-i;
        }
        for (int j = 1; j <= a+row-1; j++)
        {
            col=j;
            if(col<=a-row)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
