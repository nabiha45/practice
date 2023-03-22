#include <stdio.h> 
#include <string.h>

int main() 
{
    char str1[101];
    char str2[102];
    gets(str1);
    gets(str2);
   
    int l = strlen(str1)
    
    int i; 
    for (i = 0; i < l; i+) 
    {
        if (str1[i] == str2[i]) 
        {
           printf("0")
        }
        else if (str1[i] != str2[i]) 
        {
            printf("1")
        }
    }
    return 0; 
}