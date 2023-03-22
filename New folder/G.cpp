#include <bits/stdc++.h> 
#define int long long

using namespace std; 

int32_t main() 
{
    int t; 
    cin >> t; 

    while (t--) 
    {
    int x, y, z, l, w, h; 

    cin >> x >> y >> z >> l >> w >> h;
    int i; 
    int c = 0;

    while (x < l || y < w || z < h) 
    {
        if (l > x && h < z) 
        {
            l = l/2;
            h = h*2;
            c++;
            
        }
       else if (l < x && h > z) 
        {
            l = l*2;
            h = h/2;
            c++;
        }
        else if (w > y && l < x) 
        {
            w = w/2;
            l = l*2;
            c++;
        }
        else if (w < y && l > x) 
        {
            w = w*2;
            l = l/2;
            c++;
        }
        else if (h > z && w < y) 
        {
            h = h / 2; 
            w = w*2;
            c++;
        }
        else if (h < z && w > y) 
        {
            h = h*2;
            w = w/2;
            c++;
        }

    } 
    cout << c;
    } 

}