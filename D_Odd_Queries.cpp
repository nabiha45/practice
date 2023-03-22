#include <bits/stdc++.h> 
#define int long long 
using namespace std; 
int32_t main() 
{
    int t; 
    cin >> t; 
    while(t--) 
    {
        int n, q; 
        cin >> n >> q;
        vector <int> v, sum;
        int s = 0; 
        for(int i = 0; i < n; i++) 
        {
            int x; 
            cin >> x; 
            v.push_back(x);
        }
        for(int i = 0; i < n; i++) 
        {
            s += v[i]; 
            sum.push_back(s);
        }  
        while(q--) 
        {
            int l, r, k; 
            cin >> l >> r >> k; 
            int ans = 0; 
            l--, r--; 
            if(l!= 0) ans= sum[l-1];
            ans+= (r-l+1)*k; 
            ans+= sum[n-1] -sum[r]; 
            if(ans%2 == 0) cout << "NO\n"; 
            else cout << "YES\n";
        }

        
    }
}