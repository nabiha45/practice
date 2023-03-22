#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int n, x; 
    vector<int> v; 
    cin >> n; 
    for(int i = 0; i < n; i++) 
    {
         
        cin >> x;
        v.push_back(x);
    }
    int t; 
    cin >> t; 
    while(t--) 
    {   int a;
    cin >> a;
    std::vector<int>::iterator low;
    low = std::lower_bound(v.begin(), v.end(), a); 
    
    if(low == v.end()) 
    {
        cout << "No" << " " << (low - v.begin()+1) << "\n";
    }

    else 
    {
        cout << "Yes" << " " << (low - v.begin()+1) << "\n"; 
    }


    }
    


    
}