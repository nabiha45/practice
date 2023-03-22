#include<stdio.h>
float sin(float x, int count, int i, float sum);
float power(float x, int i);
int fact(int i);
float sin(float x, int count, int i, float sum)
{
    if(count>10) return sum;
    if(count%2!=0)
    {
        sum=sum+(power(x,i)/fact(i));
        return sin(x,count+1,i+2,sum);
    }
    sum=sum-(power(x,i)/fact(i));
    return sin(x,count+1,i+2,sum);
}
float power(float x, int i)
{
    if(i==0) return 1;
    return x*power(x,i-1);
}
int fact(int i)
{
    if(i==0) return 1;
    return i*fact(i-1);
}
int main()
{
    float pi=3.141592654;
    int x;
    scanf("%d", &x);
    if(x>180) x=360-x;
    if(x>90) x=180-x;
    float a=x*pi/180;
    //printf("%f", a);
    float res=sin(a, 1,1,0);
    printf("%.5f", res);
    return 0;
}
