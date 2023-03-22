#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    int n; 
    cin >> n;
    vector <int> v; 
    int i; 
    for(i = 0; i < n; i++) 
    {
        int x; 
        cin >> x; 
        v.push_back(x); 
    }
    sort(v.begin(), v.end());
    int sum = 0; 
    int c = 0;
    for(i = 0; i < v.size(); i++) 
    {
        sum += v[i];
        if(sum > 4) 
        {
            c++;
            sum = v[i]; 
            if(sum == 4) 
            {
                sum == 0;
            }
        }
           
           if(sum == 4) 
            {
                c++;
                sum = 0;
            }
            cout <<"i -->"<<  i << " " <<"c -- >"<< c << "sum -->" << " " << sum << "\n";
    }
    cout << c;
}