#include <bits/stdc++.h> 
using namespace std; 
int c(int n) 
{   int count = 0; 
    
    while(n != 0) 
    {
        count += n / 5; 
        n = n/5; 
    }
            return count; 
}

int main() 
{
    int t; 
    cin >> t; 
    int cs = 1;
    while(t--) 
    {   
         
        int m, ans = -1; 
        cin >> m; 
        int low= 1; 
        int high=INT_MAX; 
        while(low <= high) 
        {
            int mid = (low+high)/2;
        
        int k = c(mid); 
            
            if(k == m) {
                ans = mid; 
            }
            if(k < m) {
                low = mid+1;
            }
            else 
                high = mid-1;
            }
            if(ans == -1) cout << "Case " << cs << ":" << " impossible" << endl; 
        else cout << "Case " << cs << ": " << ans << endl; 
        cs++;
    }
}