#include <stdio.h>

int sum(int n)
{
    int d, i;

    for (i = 1; i <= n; i++)
    {
        d = i + sum(n);
    }
}

int main()
{

}
