#include <stdio.h>
#include <string.h>

int main()
{

    char str1[100001];
    char str2[100001];
mj    gets(str1);
    gets(str2);
    int i;
    int c[10001];
    int sum = 0, carry = 0;
    int l = strlen(str1);
    for(i = l-1; i >= 0; i--)
    {
        sum= str1[i] - '0' + str2[i] - '0' + carry;

        if(sum >= 10)
        {
            carry = 1;
            c[i] = sum - 10;
        }
        else
        {
            carry = 0;
            c[i] = sum;
        }
        if(i == 0 && carry == 1)
        {
            c[i] = sum;
        }
    }
    for(i = 0; i < l; i++)
    {
        printf("%d", c[i]);
    }
    return 0;
}
