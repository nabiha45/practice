#include<iostream>

using namespace std;

int main()
{

    string s,s1;

    cin>>s>>s1;

    int a[101],b[101],c[102];



    int carry=0,sum=0;

    for(int i=s.length()-1; i>=0; i--)
    {

        sum=s[i] -'0' + s1[i] - '0' +carry;

        if(sum>=10)
        {

            carry=1;

            c[i]=sum-10;

        }

        else
        {

            c[i]=sum;

            carry=0;

        }

        if(i==0&&carry==1)
        {
            c[i]=sum;


        }
    }

    for(int i=0; i<s.length(); i++)
    {
        cout<<c[i];

    }
}
