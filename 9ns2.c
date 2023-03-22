int main(int argc, char const *argv[])
{
    int n,row,col,ifrit;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        ifrit=1;
        for (int j = 1; j <= n+i-1; j++)
        {
            if(j<=n-i)
            {
                printf(" ");
            }
            else if(j<=n)
            {
                printf("%d",ifrit);
                ifrit++;
            }
            else if(j>n)
            {
                if(j==n+1)
                {
                    ifrit--;
                }
                ifrit--;
                printf("%d",ifrit);

            }
        }
        printf("\n");
    }
    return 0;
}
