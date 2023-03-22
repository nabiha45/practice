#include <stdio.h>
void recurse (int i)
{
    if(i > 4)
    {
        recurse(i-1);
        printf("%d", i);
    }
}
int main()
{
    recurse(8);
}
