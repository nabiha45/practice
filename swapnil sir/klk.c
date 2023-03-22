#include <stdio.h>

int main()
{
    int num = 154878, result;
    result= sum(num);

    printf("Sum is %d\n", result);
    return 0;
}
int sum(int num)
{
    if(num != 0)
    {
        int s = num%10+sum(num/10);
        printf("%d\n", s);

        printf("%d\n", num%10);
        return s;
    }
    else
    {
        return 0;
    }
}
