#include <stdio.h>
int within_x_percent(int x, float n, int r);

int main()
{
    printf("Enter a temperature: ");
    int x;
    float n;
    scanf("%f", &n);
    if (n >= 0 && n <= 200)
    {
         x = 100;
    }
    else if(n > 200 && n <= 400)
    {
         x = 357;
    }
    else if (n > 400 && n <= 1500)
    {
         x = 1187;
    }
    else if (n > 1500 && n <= 2300)
    {
         x = 2193;
    }
    else if (n > 2300 && n <= 2800)
    {
         x = 2660;
    }

    within_x_percent(x, n, 5);
}
int within_x_percent(int x, float n, int r)
{

    float low = x - 0.05*x;
    float high = x + x*0.05;

    if (n >= 0 && n <= 200)
    {
        if(n >= low && n <= high)
        {
            printf("The substance is Water");
        }
    }
    else if(n > 200 && n <= 400)
    {
        if(n >= low && n <= high)
        {
            printf("The substance is Mercury");
        }
    }
    else if (n > 400 && n <= 1500)
    {
       if(n >= low && n <= high)
        {
            printf("The substance is Copper");
        }
    }
    else if (n > 1500 && n <= 2300)
    {
        if(n >= low && n <= high)
        {
            printf("The substance is Silver");
        }
    }
    else if (n > 2300 && n <= 2800)
    {
        if(n >= low && n <= high)
        {
            printf("The substance is Gold");
        }
    }
    else
    {
        printf("The substance is unknown");
    }
}

