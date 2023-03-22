#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int n, m; 
    cin >> n >> m; 

    vector <int> v; 
    int i; 
    for(i = 0; i < n; i++) 
    {
        int x; 
        cin >> x; 

        v.push_back(x);
    }
    int sum = 0;
    for(i = 1; i <= m; i++) 
    {
        int k; 
        cin >> k; 
       
         sum+= v[k-1];
    }
    cout << sum; 
}