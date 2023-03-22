#include <bits/stdc++.h> 
#define int long long 
using namespace std; 

int32_t main() 
{
    int t; 
    cin >> t; 
    while(t--) 
    {
        int n, a, b, c1;
        int k; 
        cin >> n >> a >> b; 
        c1 = 0;
        int c2 = 0; 

        int i, j; 
        
          for (j = 2; j <= b; j++) 
        {
            if(a % j == 0 || j % a == 0) 
            {
                c1++;
                k = j; 
            }
            if (gcd(k, b) != 1) 
            {
                c2++;
            }

            }
        
            if(c2 == c1) 
            {
                cout << c1;
            }
            else if (c2 > c1) 
            {
                cout << c1;
            }
            else if (c2 < c1) 
            {
                cout << c2;
            }
    }
}