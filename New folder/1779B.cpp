#include <bits\stdc++.h> 

using namespace std; 

int main() 
{
    int t; 
    cin >> t; 
    while (t--)  
    {
        int n, d, i;
        d = 1; 
        int arr[10000];  
        cin >> n;
       int sum = 0; 
       
       if (n % 2 == 1 && n != 3) 
       {
       for (i = 0; i < n; i++) 
       {    
            int k = n/2;
        if (i % 2 == 0) 
        {
            arr[i] = k -1;
        }
        else if (i % 2 != 0) 
        {
            arr[i] = -k;
        }
       }
       }
       else if (n % 2 == 0) 
       {
            for (i = 0; i < n; i++) 
       {
        if (i % 2 == 0) 
        {
            arr[i] = 1;
        }
        else if (i % 2 != 0) 
        {
            arr[i] = -1;
        }
       }
       }
       for (i = 0; i < n; i++) 
       {
        sum += arr[i];
       }
       for (i = 0; i < n-1; i++) 
       {
        if (arr[i] + arr[i+1] != sum) 
        {
            d = 0; 
            break;
        }
       }
       if ( d == 1 && n != 3) 
       {
        cout << "YES\n";
        for (i = 0; i < n; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
       }
       else if (d == 0 || n == 3) 
       {
        cout << "NO\n";
       }

       }
    return 0; 
}