#include <bits/stdc++.h> 


using namespace std;
int main()
{
    while (1) 
    {
        int n; 
        cin >> n;
        if (n == 0) break; 
        else 
        {
            int a[n]; 
            int i; 
            for (i = 0; i < n; i++) 
            {
                cin >> a[i];
            }

            int sum = 0;
            int b[n];
            for (i = 0; i < n; i++) 
            {
                for (j = i+1; j < n; j++) 
                {
            sum = a[i] + a[j]; 
            int k = 0;
            b[i] = sum; 
            for (i = 2; i < n; i++) 
            {
                sum = sum + a[i];
                
                b[++k] = sum;  
            }
            int sum2 = 0;
            for (i = 0; i < n-1; i++) 
            {
                sum2 += b[i];
            }
            int c[n];
            c[i] = sum2;
            }
            }
            sort()
            // cout << sum2 << "\n";
            /* for (i = 0; i < n-1; i++) 
            {
                sum[i] = a[i] + a[i+1]; 
            } 
            int sum2 = 0;
            for (i = 0; i < n-1; i++) 
            {
                sum2+= sum[i];
            }
            cout << sum2; */

        }
    }
}