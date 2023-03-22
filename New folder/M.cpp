#include <bits/stdc++.h> 


using namespace std; 
int32_t main() 
{
    int n, k; 
    cin >> n >> k; 

    int a[n]; 
    int b[n]; 
    int d = 0, i; 

    for (i = 0; i < n; i++) 
    {
        cin >> a[i]; 
    }
    int j = 0; 
    for (i = 0; i < n-1; i++) 
    {
        if(a[i] != a[i+1]) 
        {
            d++;
        }
        if (a[i] == a[i+1] || i == n-2) 
        {   
            
            b[j] = d;
            ++j; 
            
            d = 0;  
        }
    }
    if (d == n-1) 
    {
        cout << d+1;
    }
    else 
    {
        
        int max = *max_element(b, b+j);
        
        cout << max+1;
    }
  


}