#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int t; 
    cin >> t;
    while(t--) 
    {
        int n; 
        cin >> n; 
        int arr[n]; 
        for(int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        int c = 0; 
        for(int i = 0; i < n; i++) 
        {   if(i != n-1)
        {
            while(arr[i+1] % arr[i] == 0) 
            {
                arr[i]++;
            }
        }
        else if(i == n-1) 
        {
            if(arr[i] == arr[i-1]) 
            {
                arr[i]++;
            }
        }



        }

        for(int i = 0; i < n; i++) 
        {
            cout << arr[i] << " "; 
        }
        cout << "\n";
    }
}
