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
    int c = 0; 

    while ((l > x && l > y && l && z) || (w > y && w > x && w > z) && (h < z&& h < x || h < y)) 
    {
        if ((l > x && l > y && l && z) && (h < z&& h < x || h < y)) 
        {
            l = l/2;
            h = h*2; 
            c++;
            // cout << l << h << " "<< "\n"; 
        }
        else if ((w > y && w > x && w > z)  && (h < z && h < x && h < y)) 
        {
            w = w/2;
            h = h*2;
            c++;
           // cout << w << h << " " << "\n";  
        }
    }
   
    if (h > x && h > y && h > z) 
    {
        c = -1;
    }

    cout << c << "\n"; 
    }
}
