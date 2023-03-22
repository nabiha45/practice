#include <stdio.h>

void star(int n)
{
    int i;
    for(i = n; i >= 0; i--)
    {
        printf("*");
    }

}


int main()
{
    star(3);
    return 0;
}
