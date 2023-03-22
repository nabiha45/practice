#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    vector <pair<int, int>> v; 
    int n; 
    cin >> n; 
    int i;
    for(i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    for(i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << " " << "\n";
    }

}