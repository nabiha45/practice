#include <bits/stdc++.h> 
#define int long long

using namespace std;

int32_t main() 
{
    int t; 
    cin >> t;
    while(t--)
    { 
    int n; 
    cin >> n; 
    getchar();
    string v; 
    getline(cin, v);
    int c = 0; 
     int sum = 0; 

    for(int i = 0; i < n-1; i++) 
    {   
       if(v[i] != '0') 
       {
        sum += v[i] -'0' +1;
       }
       
    }
    sum+= v[n-1] -'0'; 
    /* for(int i = 0; i < n; i++) 
    {
        cout << v[i] << " " << c; 
    } */
   
    cout << sum+c << "\n"; 
    }
}