#include <stdio.h>

struct std
{
    char a[80];
    char b[50];
    int c;


}s1;


int main()
{
   printf("%d", sizeof(s1));
}
