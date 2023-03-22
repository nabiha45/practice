#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    int n; 
    cin >> n; 

    vector<int> v;
    int i; 
    for(i = 0; i < n; i++) 
    {
        int x; 
        cin >> x;
        v.push_back(x); 

    }
    sort(v.begin(), v.end());
    

   if (n % 2 == 0)
    {
        int a = n / 2;
        cout << v[a-1]; 
    }
    else
    {
       int a = (n+1)/2;
        cout << v[a-1];
    }
}