#include<stdio.h>
void row(int n,int i)
{
  if(i==n) return;
  space(n,i,0);
  value(n,i,0);
  printf("\n");
  row(n,++i);

}
void space(int n,int i,int j)
{
  if(j==n-i) return;
  printf(" ");
  space(n,i,++j);
}
void value(int n,int i, int j)
{
  if(j>i) return;
  int rr=ncr(i,j);
  printf("%d ",rr);
  value(n,i,++j);
}
int ncr(int n,int r)
{
  int aa=fact(n)/(fact(r)*fact(n-r));
  return aa;
}
int fact(int n)
{
  if(n==0) return 1;
  return n*fact(n-1);
}
int main()
{
  int n,i=0,j=0;
  scanf("%d",&n);
  row(n,i);
  return 0;
}
