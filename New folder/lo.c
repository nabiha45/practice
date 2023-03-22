#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
        if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i] == 'y'))
        {

            printf(".%c",s[i]);
        }
    }
    return 0;
}
