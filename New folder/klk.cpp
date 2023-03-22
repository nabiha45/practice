#include<bits/stdc++.h>
#define ll long long
#define int float
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int arr1[3],arr2[3];
        int x,y,z,l,w,h;
        cin>>x>>y>>z>>l>>w>>h;
        arr1[0]=x;
        arr1[1]=y;
        arr1[2]=z;
        arr2[0]=l;
        arr2[1]=w;
        arr2[2]=h;
        sort(arr1,arr1+3);
        sort(arr2,arr2+3);

        int c=0;
        int p=0;
        if(arr2[2]<=arr1[2]&&arr2[1]<=arr1[1]&&arr2[0]<=arr1[0])
        {
            cout<<"0"<<endl;

        }

        else
        {


            if(l>w)
            {
                if(l>x&&l>y&&l>z)
                {
                    for(int i=0; ; i++)
                    {
                        if(l<=arr1[2]) break;
                        c++;
                        l=l/2;
                        h=h*2;
                    }
                }
                if(w>x&&w>y&&w>z)
                {
                    for(int i=0; ; i++)
                    {
                        if(w<=arr1[1]) break;
                        c++;
                        w=w/2;
                        h=h*2;
                    }
                }
                if(h<=arr1[0]) cout<<c<<endl;
                else cout<<"-1"<<endl;
            }
            else
            {
                if(w>x&&w>y&&w>z)
                {
                    for(int i=0; ; i++)
                    {
                        if(w<=arr1[2]) break;
                        c++;
                        w=w/2;
                        h=h*2;
                    }
                }
                if(l>x&&l>y&&l>z)
                {
                    for(int i=0; ; i++)
                    {
                        if(l<=arr1[1]) break;
                        c++;
                        l=l/2;
                        h=h*2;
                    }
                }
                if(h<=arr1[0]) cout<<c<<endl;
                else cout<<"-1"<<endl;
            }
        }

    }
}