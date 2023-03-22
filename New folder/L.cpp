#include <bits/stdc++.h> 
#define int long long 

using namespace std; 

int32_t main() 
{
    int t, n, a, b, k; 
    int count = 0; 
    cin >> t >> n >> a >> b >> k; 

    int i, j; 
    int stu1 = 0;
    int stu2 = 0;

    for (i = 1; i <= n; i++) 
    {
        if (n % 2 == 1) 
        {
            if (a <= t) 
            {
                count++;
            }
        }
        else if(n%2 == 0) 
        {   

          if (b <= t) 
          {
            count++;
          }
        }
    } 
    if (count >= n) 
    {
        cout << t; 
    }

}