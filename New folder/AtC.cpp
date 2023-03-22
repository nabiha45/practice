#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int n, k, i; 
    cin >> n >> k; 
    int a[n]; 
    int b[k];
    for(i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    sort(a, a+n); 

    for(i = 0; i < k; i++) 
    {
        b[i] = a[i]; 
    }
    int m = -1; 
    for(i = 0; i < b[k-1]; i++) 
    {
        if(i != b[i]) 
        {
            m = i;
        }
    }
    if(m >= 0) cout << m;
    else if(m = -1)
    {
        cout << *max_element(b, b+k)+1; 
    }
}