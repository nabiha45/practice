#include<stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 int i,j,sum=0;
 for(i=1;i<n;i++){
 printf("%dx%d+",i,i);
 sum+=i*i;
 }
 sum+=i*i;
 printf("%dx%d=%d",i,i,sum);
}
