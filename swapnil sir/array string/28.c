#include <stdio.h>

int main()
{
    int n;
    getchar();
    char a[1000];
    char b[1000];
    int i;
    int flag =1;
    gets(a);
    gets(b);
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] != b[i])
        {
            flag=0;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Same");
    }
    else
    {
        printf("No");
    }
}
