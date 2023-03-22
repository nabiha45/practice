#include <bits/stdc++.h> 

#define int long long 
using namespace std; 

int32_t main() 
{
    int t, n; 
    cin >> t;

    while (t--) 
    {
        cin >> n; 
        int a[n];
        int i; 
        int sum2 = 0; 
        for (i = 0; i < n; i++) 
        {
            cin >> a[i];
            sum2 += a[i];
        }
        if (sum2 != n) 
        {
        
        for (i = 0; i < n-1; i++) 
        {
            if (a[i] == -1 && a[i+1] == -1) 
            {
                a[i] = 1; 
                a[i+1] = 1; 
                break;
            }
           /*else 
            {
                a[i] = -1; 
                a[i+1] = -1;
            } /**/ 
        }
        }
        if (sum2 == n) 
        {
        for (i = 0; i < n-1; i++) 
        {
            if(a[i] == 1 && a[i+1] == 1) 
            {
                a[i] = -1; 
                a[i+1] = -1;
                break;
            }
        }
        }

   /* for (i = 0; i < n; i++) 
    {
        cout << a[i];
    }/**/
    int sum = 0; 
    for (i= 0; i < n; i++) 
    {
        sum += a[i];
    }
    cout << sum << "\n";
    
    }

    
}

