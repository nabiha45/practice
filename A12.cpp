#include <bits/stdc++.h> 

using namespace std;

int main() 
{
    int n, q; 
    cin >> n >> q;

    string h;
    getchar();
    getline (cin, h);

    int i; 
    int sum = 0; 
    int arr[100001];
    for (i = 0; i < n; i++) 
    {
        sum+= h[i] - 96; 
        arr[i] = sum; 
        
    }
    

    
    while (q--) 
    {   
        int l, r; 
        cin >> l >> r; 
        if (l == 1) cout << arr[r-1] << "\n";
        else cout << arr[r-1] - arr[l-2] << "\n";
        
    }

}