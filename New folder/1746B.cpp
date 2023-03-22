#include <bits/stdc++.h> 

using namespace std;

int main() 
{
    int t; 
    cin >> t; 

    while(t--) 
    {
        int n; 
        cin >> n; 
        int j, c=0;
        vector <int> v; 
        int i; 
        for(i = 0; i < n; i++) 
        {
            int x; 
            cin >> x; 
            v.push_back(x); 
        }
        vector <int> v2;
        vector <int> v3; 
        v3 = v;
        sort(v3.begin(), v3.end()); 
       /* if(v3 == v) 
        {
            cout << "0" << "\n";
        }
        else 
        { */


         
        for(i = 0; i < v.size(); i++) 
        {   if(v[i] == '1') 
        {
            v[n-1] = v[i] + v[n-1];
            v.erase(v.begin()+(1));
            c++;
        }

        }
        cout << c << "\n";
        for(i = 0; i < v.size(); i++) 
        {
            cout << v[i];
        }
    }
    //}
}