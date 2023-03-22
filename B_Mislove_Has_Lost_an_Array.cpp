#include <bits/stdc++.h> 
#define int long long 

using namespace std;

int32_t main() 
{
    int n, l, r;
    cin >> n >> l >> r; 
    int c = 1; 
    int min = 0, max = 0;
    for(int i = 1; i <= n; i++) 
    {  
        if(n-i < n/2 && n % 2 == 0 && l != 1) 
        {
            min += c;
            c++;
        }
        else if (n-i < (n+1)/2 && n % 2 == 1 && l != 1) 
        {
            min += c;
            c++;
        }
        else if(l == 1) 
        {
            min += 1;
        }
        else 
        {
            min += c; 
        }
    }
    int k = 1, m = 1; 
    for(int i = 1; i <= n; i++) 
    {
       if(i <= r) 
       {
        max += m; 
        m*=2; 
       // cout << max << endl;
       }
       else 
       {
        max+= (m/2);
       // cout << max << endl;
       }
    }
    cout << min << " " << max;

}