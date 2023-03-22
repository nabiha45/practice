#include <stdio.h>
#include <stdbool.h>
int main()
{

    bool has_made_the_cake=false;

    bool has_found_the_cake=true;
    if(has_made_the_cake)
    {
        printf("Fiona has made the cake so she is happy\n");
    }

    else if (has_found_the_cake)
    {
        printf("Fiona couldn't make the cake but she found it\n");
    }

    else
    {
        printf("She is sad");
    }

    return 0;
}
