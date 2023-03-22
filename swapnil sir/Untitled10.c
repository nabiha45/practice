#include <stdio.h>

int main()
{
    int val = 5, i = 1;
    for(i = 0; i < 10; i = i+2)
    {
        printf("%d\n", val++);
        printf("%d\n", ++val);
        if(val % 5 == 1)
        {
            val = val+3;
        }
    }
}
