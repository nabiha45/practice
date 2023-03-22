#include <bits/stdc++.h> 

#define int long long 
using namespace std;

int32_t main() 
{
    int n, m; 
    cin >> n >> m; 

    vector <int> v; 
    vector <int> v2;
    int i; 
    for(i = 0; i < m; i++) 
    {
        int x; 
        cin >> x; 
        v.push_back(x);
    }
    sort(v.begin(), v.end()); 
    int diff = 0;
    int j = n; 
    for(i = 0; ; i++) 
    {
        diff = v[i] - v[j-1];
        ++j;
        v2.push_back(-diff);
        if(j > m) 
        {
            break;
        }
        
    }
    cout << *min_element(v2.begin(), v2.end());
}