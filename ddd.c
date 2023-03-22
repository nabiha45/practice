#include <stdio.h>

#include <stdbool.h>



int main()
{
    bool f = true, s = true, e = true, b = true, m =  false;

    bool can_make_the_cake = f||s||e||b||m;

    if(can_make_the_cake)
    {
        printf("Yes\n");
    }

    else
    {
        printf("No\n");
    }

    return 0;
}
