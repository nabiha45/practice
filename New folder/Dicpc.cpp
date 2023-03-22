#include <bits/stdc++.h>
#define int long long 

using namespace std; 

int32_t main() 
{
    int t; 
    cin >> t;
    int x = 1;
    while(t--) 
    {    
        int k; 
        int arr[3]; 
        int i; 
        for(i = 0; i < 3; i++) 
        {
            cin >> arr[i];
        }
        cin >> k; 
        int flag = 1;
        sort(arr, arr+3); 
        while (arr[0] != arr[1] || arr[1] != arr[2] || arr[2] != arr[0]) 
        {
            arr[1]= arr[1] - k;
            arr[2] = arr[2] - k;
            sort(arr, arr+3);
            
            arr[0]= arr[0] +k;
            arr[1] = arr[1] + k; 
            sort(arr, arr+3);
            
            if((arr[1] - arr[0] < k && arr[1] - arr[0] != 0) || (arr[2] - arr[1] < k && arr[2] - arr[1] != 0)) 
            {   
                flag = 0; 
                break; 
            }
            flag = 1; 
        }
        if (flag == 1) 
        {
            cout << "Case "<<x<<": Peaceful" << "\n";
            x++;
        }
        else if (flag == 0) 
        {
            cout << "Case "<<x<<": Fight" << "\n";
            x++;
        }


    }
    return 0; 
}
