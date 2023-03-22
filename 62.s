#include<stdio.h>
int main()

{
 int n;
 scanf("%d",&n);
 int i;

 for(i=0;i<n*n;i++){


 if(i!=0 && i%n==0)
 {

 printf("\n");
 printf("%d",(i+1)%2);
 }

 }
}
