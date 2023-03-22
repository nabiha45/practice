#include<iostream>

using namespace std;

int main(){

string s,s1;

cin>>s>>s1;

int a[101],b[101],c[102];

for(int i=0;i<s.length();i++){

a[i]=s[i]-48;//storing numbers into array

b[i]=s1[i]-48;

}

int carry=0,sum=0;

for(int i=s.length()-1;i>=0;i--){

sum=(a[i]+b[i])+carry;//adding one by one digit

if(sum>=10){

carry=1;

c[i+1]=sum-10;//taking care of carry

}

else{

c[i+1]=sum;

carry=0;

}

if(i==0&&carry==1)c[0]=1;

sum=0;

}

for(int i=0;i<=s.length();i++)cout<<c[i];

}
