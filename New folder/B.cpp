#include <bits/stdc++.h> 

using namespace std;

int main() 
{
    int t;
    cin >> t; 
    while(t--) 
    {
        int n, x, i; 
        cin >> n >> x; 

        vector <int> v;
        vector <int> v2;
        vector <int> v3;
        int a[3];
        
        for(i = 0; i < n; i++) 
        {   
            int x;
            cin >> x;
            v.push_back(x); 
        }
        v2 = v;
        v3 = v;
        int min = 0, max = 0, c = 0; 
        int sum1 = 0, sum2 = 0; 
        v[0] = v[0] + v[1];
        
        v.erase(v.begin()+1);
        v2[n-1] = v2[n-1] + v2[n-2];
        v.erase(v.begin()+(n-2));
        for(i = 0; i < v.size(); i++) 
        {
            if(v[i] % x == 0) 
            {
               min += v[i] / x; 
            }
            else if(v[i] % x == 1) 
            {
                min+= (v[i]/x)+1; 
            }
        }
        a[0] = min;
        cout << a[0];
        for(i = 0; i < v2.size(); i++) 
        {
            if(v2[i] % x == 0) 
            {
               max += v2[i] / x; 
            }
            else if(v2[i] % x == 1) 
            {
                max+= (v2[i]/x)+1; 
            }
        }
        a[1] = max;
        cout << a[1];
         for(i = 0; i < v3.size(); i++) 
        {
            if(v3[i] % x == 0) 
            {
                c+= v3[i];
            }
            else if(v3[i] % x == 1) 
            {
                c+= v3[i]+1;
            }
        }
        a[2] = c;
        cout << a[2];
        sort(a, a+3); 

        for(i = 0; i < 3; i++) 
        {
            cout << a[i] << " ";
        }


        



    }
}