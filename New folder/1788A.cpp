#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int t; 
    cin >> t; 

    while (t--) 
    {
        int n, i; 
        cin >> n; 
        int arr[n];
        int min = 99999;
        
       
        for (i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        int k, sum1 = 1, sum2 = 1;
        
        int flag = 0; 
        for(k = 0; k <= n-1; k++) 
        {   sum2 = 1;
            sum1*= arr[k]; 

            for (i = k+1; i <= n-1; i++) 
            {
                sum2*= arr[i];
                
            }
            if(sum1 == sum2) 
            {   
                flag = 1; 
                
                if (k < min) 
                {
                    min = k; 
                    // cout << min+1 << "\n";
                }
            }
            
           // cout << sum1 << " " << sum2<< "\n";
        }
     
        if (flag == 1) 
        {
        cout << min+1 << "\n";
        }
        else if (flag == 0) 
        {
            cout << "-1" << "\n";
        }
    }
}