#include <bits/stdc++.h> 
#define int long long

using namespace std; 

int small(int a[], int l, int r, int x) 
{
    if(a[r] < x) return (r-l+1);
    int lo, hi, mid;
    lo = l, hi = r; 
    while(lo < hi) 
    {
        mid = (lo+hi)/2;
        if(a[mid] < x) lo = mid+1;
        else hi = mid;
    }
    return lo; 
}
int big(int a[], int l, int r, int x) 
{
    if(a[r] <= x) return 0; 
    int lo = l, hi = r, mid; 
    while(lo < hi) 
    {
        mid=(lo+hi)/2;
        if(a[mid] <= x) lo = mid+1;
        else hi = mid;  
    }
    return (r-l+1-lo); 
}
int32_t main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int t; 
    cin >> t; 
    int tc = 0; 
    while(t--) 
    {   
         cout << "Case " << ++tc << ":" << endl;
        int n, q;
        cin >> n >> q; 
        int start[n], end[n]; 
        for(int i = 0; i < n; i++) 
        {
            cin >> start[i] >> end[i]; 
        }
        sort(start, start+n); 
        sort(end, end+n); 
        while(q--) 
        {
            int p; 
            cin >> p; 
            int n1 = big(start, 0, n-1, p); 
            int n2 = small(end, 0, n-1, p);
            int ans = n-n1-n2; 
           
            cout << ans << "\n"; 

        }

    }

}