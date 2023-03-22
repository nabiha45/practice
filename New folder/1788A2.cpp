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
        int count = 0; 
        
        
       
        for (i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++) 
        {
            if(arr[i] == 2) 
            {
                count++;
            }
        }
        if(count == 0) 
        {
            cout << "1" << "\n";
        }
        else if (count % 2 != 0) 
        {
            cout << "-1" << "\n";
        }
        else if (count % 2 == 0) 
        {
            cout << count / 2 << "\n";
        }
    }
}