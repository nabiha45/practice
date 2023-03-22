#include <stdio.h>

int main()
{
    char s1[10001];
    char s2[10001];
    gets(s1);
    gets(s2);
    int i;
    int l = strlen(s1);
    int carry = 0;
    int c[10001];
    int p = 0;

    for(i = l-1; i >= 0; i--)
    {
        p = (s1[i]-'0')*(s2[i] - '0') + carry;
        if(p >= 10)
        {
            carry = p / 10;
            c[i] = p%10;
        }
        else
        {
            carry = 0;
            c[i] = p;
        }
        if(i == 0 && carry != 0)
        {
            c[i] = p;
        }
    }
    for(i = 0; i < l; i++)
    {
        printf("%d", c[i]);
    }
}
