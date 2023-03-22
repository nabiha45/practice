#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int n, k; 
    cin >> n >> k; 
    int arr[n]; 
    int i; 
    for(i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int count = 0; 
    for(i = 0; i < n; i++) 
    {
        
            arr[i]+= k;
            if(arr[i] <= 5) 
            {
                count++;
            } 
    }
    
        cout << count/3;
    
    
}