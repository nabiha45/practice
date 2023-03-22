#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int n; 
    cin >> n; 
    int i; 
    vector<int>v;
    for(i = 0; i < n; i++) 
    {   
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i = 0; i < n; i++) 
    {
        cout << v[i] << " ";
    }
}