#include <bits/stdc++.h> 

#define int long long

using namespace std; 

int32_t main() 
{
     
    
        int n = 0, x; 
        cin >> x; 
        int i, s = 0; 
        for(i = 1; i <= x; i++) 
        {
            s = (i*(i+1))/2;
            if(s == x) 
            {
                n = 1;
                break; 
            }
        }
        if(n == 1) 
        {
            cout << "YES";
        }
        else if(n == 0)
        {
            cout << "NO";
        }
       
    
} 

