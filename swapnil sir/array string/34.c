#include <stdio.h>

int main()
{
    int n, i, j, l,k;
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    l = strlen(s2);
    int flag = 0;
    for(i = 0; i < strlen(s1); i++)
    {
        int c=0;
        for(k = 0; k < l; k++)
        {
            if(s1[i+k] == s2[k])
            {
                c++;
            }
        }
        if(c==l)
        {
            flag = 1;
            break;
        }
    }
    if(flag ==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
