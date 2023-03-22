#include <bits/stdc++.h> 

using namespace std;
int main() 
{
    int n; 
    cin >> n; 
    vector<int>v;
    int i, x, a, b;
    for(i = 0; i < n; i++) 
    {
        int m; 
        cin >> m; 
        v.push_back(m);
    } 
    cin >> x; 
    v.erase(v.begin()+(x-1));
    cin >> a >> b;
    v.erase(v.begin()+(a-1), v.begin()+(b-1));
    int l = v.size();
    cout << l << "\n"; 
    for(i = 0; i < l; i++) 
    {
        cout << v[i] << " ";
    }

}