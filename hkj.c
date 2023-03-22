#include<stdio.h>
void input(int a[] ,int n ,int i);
void output(int a[] ,int n ,int i);
int check(int n,int i);
int count(int a[],int n,int i,int c);


int main()
{
    int n;

    scanf("%d",&n);
    int a[n];
    input(a,n,0);
    int res=count(a,n,0,0);
    printf("%d",res);
    return 0;
}


void input(int a[] ,int n ,int i)
{
    if(i==n) return;
    scanf("%d", &a[i]);
    input(a,n,i+1);
}


int check(int n,int i)
{
    if (n == 1) return 0;
    if(i==1) return 1;
    if(n%i==0) return 0;
    return check(n,--i);
}

int count(int a[],int n,int i,int c)
{
    if(i==n) return c;
    int r=check(a[i],a[i]-1);
    // printf("%d\n", r);
    if(r==1) c++;
    return count(a,n,i+1,c);
}
