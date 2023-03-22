#include <bits/stdc++.h> 


using namespace std;
int main()
{
    while (1) 
    {
        long long int n; 
        cin >> n;
        if (n == 0) break; 
        else 
        {
            int a[n]; 
            long long int i; 
            for (i = 0; i < n; i++) 
            {
                cin >> a[i];
            }
           
            sort(a, a+n);

            long long int sum = 0;
            int b[n];
            sum = a[0] + a[1]; 
            long long int j = 0;
            b[0] = sum; 
            for (i = 2; i < n; i++) 
            {
                sum = sum + a[i];
                
                b[++j] = sum;  
            }
            long long int sum2 = 0;
            for (i = 0; i < n-1; i++) 
            {
                sum2 += b[i];
            }
            cout << sum2 << "\n";

        }
    }
}