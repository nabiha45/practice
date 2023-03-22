#include <bits/stdc++.h>

#define int long long 

using namespace std; 
int32_t main() 
{
    vector <int> v; 
    vector <int> v2;
    int x, i, n, c = 0; 
    cin >> n; 
    for(i = 0; i < n; i++) 
    {
        cin >> x;
        v.push_back(x); 
    }

    for(i = 0; i < n-1; i++) 
    {
        
        if (v[i] - v[i+1] <= 0) 
        {
            c++;
        }
        else 
        {
             
            v2.push_back(c+1); 
            c = 0;
        }
        

    }
    v2.push_back(c+1);
    cout << *max_element(v2.begin(), v2.end());
}

