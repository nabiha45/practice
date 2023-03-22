#include <bits/stdc++.h> 
#define int long long

using namespace std;

int32_t main() 
{
    int n; 
    cin >> n; 
    int arr[n+1]; 
    for(int i = 1; i <= n; i++) 
    {
        cin >> arr[i];
    }
    int max, min;
    if (n % 2 == 0) 
    {
    for(int i = 1; i <= n; i++) 
    {
        if(i > n/2 && i != n) 
        {  
             int min1 = abs(arr[i] - arr[i-1]);
           int min2 = abs(arr[i]- arr[i+1]);
           int max1 = abs(arr[i] - arr[1]);
           int max2 = abs(arr[i] - arr[n]);
           if(min1 > min2) min = min2;
           else if(min2 > min1) min = min1;
           else  min = min1; 
           if(max1 > max2) max = max1;
           else if(max2 > max1) max = max2;
           else max = max2;
           cout << min << " " << max << "\n";

        }
        else if (i == n) 
        {
            int min = abs(arr[i] - arr[i-1]);
          // int min2 = abs(arr[i]- arr[i+1]);
           int max = abs(arr[i] - arr[1]);
           
           cout << min << " " << max << "\n";
        }
        else if(i < n/2 && i != 1) 
        {
           int min1 = abs(arr[i] - arr[i-1]);
           int min2 = abs(arr[i]- arr[i+1]);
           int max1 = abs(arr[i] - arr[1]);
           int max2 = abs(arr[i] - arr[n]);
           if(min1 > min2) min = min2;
           else if(min2 >= min1) min = min1;
           if(max1 > max2) max = max1;
           else if(max2 >= max1) max = max2;
           cout << min << " " << max << "\n"; 
        }
        else if(i < n/2 && i == 1) 
        {
             min = abs(arr[i] - arr[i+1]);
            max = abs(arr[i] - arr[n]);
            cout << min << " " << max << "\n";
        } 
        else if (i == n/2) 
        {
             int min1 = abs(arr[i] - arr[i-1]);
           int min2 = abs(arr[i]- arr[i+1]);
           int max1 = abs(arr[i] - arr[1]);
           int max2 = abs(arr[i] - arr[n]);
           if(min1 >= min2) min = min2;
           else if(min2 >= min1) min = min1;
           if(max1 > max2) max = max1;
           else if(max2 >= max1) max = max2;
           cout << min << " " << max << "\n";
        }
    }
    }
    else if (n % 2 == 1) 
    {
    for(int i = 1; i <= n; i++) 
    {
        if(i > (n+1)/2 && i != n) 
        {  
           int min1 = abs(arr[i] - arr[i-1]);
           int min2 = abs(arr[i]- arr[i+1]);
           int max1 = abs(arr[i] - arr[1]);
           int max2 = abs(arr[i] - arr[n]);
           if(min1 >= min2) min = min2;
           else if(min2 >= min1) min = min1;
           if(max1 > max2) max = max1;
           else if(max2 >= max1) max = max2;
           cout << min << " " << max << "\n";

        }
        else if (i == n)
        {
            int min = abs(arr[i] - arr[i-1]);
           // int min2 = abs(arr[i]- arr[i+1]);
           int max = abs(arr[i] - arr[1]);
           
           cout << min << " " << max << "\n";
            
        }
        else if(i < (n+1)/2 && i != 1) 
        {
           int min1 = abs(arr[i] - arr[i-1]);
           int min2 = abs(arr[i]- arr[i+1]);
           int max1 = abs(arr[i] - arr[1]);
           int max2 = abs(arr[i] - arr[n]);
           if(min1 >= min2) min = min2;
           else if(min2 >= min1) min = min1;
           if(max1 >= max2) max = max1;
           else if(max2 > max1) max = max2;
           cout << min << " " << max << "\n";
        }
        else if(i < (n+1)/2 && i == 1) 
        {
            min = abs(arr[i] - arr[i+1]);
            max = abs(arr[i] - arr[n]);
            cout << min << " " << max << "\n";
        } 
        else if (i == (n+1)/2) 
        {
           int min1 = abs(arr[i] - arr[i-1]);
           int min2 = abs(arr[i]- arr[i+1]);
           int max1 = abs(arr[i] - arr[1]);
           int max2 = abs(arr[i] - arr[n]);
           if(min1 >= min2) min = min2;
           else if(min2 >= min1) min = min1;
           if(max1 >= max2) max = max1;
           else if(max2 > max1) max = max2;
           cout << min << " " << max << "\n";

        }
    }
    }
}