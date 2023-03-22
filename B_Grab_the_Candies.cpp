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
        int x = 0, y=0; 
        for(int i = 0; i < n; i++) 
        {
            cin >> arr[i]; 
            if(arr[i] % 2 == 0) 
            {
                x+= arr[i];
            }
            else if(arr[i] % 2 ==1)
            {
                y+= arr[i];
            }
        }
        if(x > y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}