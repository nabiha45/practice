#include <bits/stdc++.h>
#define int long long


using namespace std; 

int32_t main() 
{
    int n, x; 
    cin >> n >> x; 
    int sum = 0;
    vector <int> v; 
    for(int i = 0; i < n; i++) 
    {
        int y;
        cin >> y; 
        v.push_back(y); 
    } 
    int c = 0;
    for(int i = 0; i < v.size(); i+=2) 
    {   
        if(i == n-1) sum+= v[i];
       else  sum+= v[i] +v[i+1];
        if(sum <= x) 
        {
            c++;
            sum = 0;
        }
        else if(sum > x) 
        {
            if(sum % x == 0) 
            {
                c+= sum/x;
                sum = 0;
            }
            else 
            {
                c+= (sum/x) +1; 
                sum = 0; 
            }
        }

    }

    cout << c; 


}
