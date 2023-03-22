#include <stdio.h>
#include <string.h>
int main()
{
    int n, c;

    char str[105];
    gets(str);
    int l = strlen(str);


    int i;
    for (i = 0; i <= l-6; i++)
    {
        if((str[i]=='0' && str[i+1]=='0' && str[i+2]=='0' && str[i+3]=='0' && str[i+4]=='0' && str[i+5]=='0' && str[i+6]=='0') || (str[i]=='1' && str[i+1]=='1' && str[i+2]=='1' && str[i+3]=='1' && str[i+4]=='1' && str[i+5]=='1' && str[i+6]=='1'))
    {
        c = 1;
        break;
    }
    else
    {
        c = 0;
    }

    }
    if (c == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
