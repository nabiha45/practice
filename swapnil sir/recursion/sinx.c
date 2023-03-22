#include <stdio.h>



float power(float x, int i)
{
    if(i == 0) return 1;
    return x*power(x, --i);
}
int fact(int i)
{
    if(i == 0) return 1;
    return i*fact(i-1);
}
float sin(float x,int c, int i, float sum)
{
    if(c > 10) return sum;
    if(c % 2 != 0)
    {
        sum= sum + (power(x,i) / fact(i));
        return sin(x, ++c, i+2, sum);
    }
    else
    {
        sum = sum- (power(x,i) / fact(i));
        return sin(x, ++c, i+2, sum);
    }

}

int main()
{
    float pi=3.141592654;
    int x;
    scanf("%d", &x);
    if(x > 180) x = 360-x;
    if(x > 90) x = 180-x;

    float a = (x*pi) / 180;

    float res = sin(a,1,1, 0);
    printf("%.5f", res);
    return 0;
}
