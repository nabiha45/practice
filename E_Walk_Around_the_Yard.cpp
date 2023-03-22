#include <bits/stdc++.h> 
#define int long long 
using namespace std; 

struct point {
    int x; 
    int y; 
};
int row, col; 

bool valid(point p){
    if(p.x > 0 && p.x <= row && p.y > 0 && p.y <= col) return true;
    return false;  
}
int32_t main() 
{
    cin >> row >> col;
    point curr; 
    cin >> curr.x >> curr.y;
    int n; 
    cin >> n; 
    int ans = 0; 
    for(int i = 0; i < n; i++) 
    {
       int x, y; 
       cin >> x >> y; 
       int low = 0; 
       int high = 1e9;
       int mid;
       while(low <= high) 
       {
        mid=(low+high+1)/2;
        point next;
        next.x = curr.x+mid*x;
        next.y = curr.y+mid*y; 
        if(valid(next)) 
        {
            low = mid; 
        }
        else 
        {
            high = mid-1; 
        }

       }
       ans+= low; 
       curr.x += low*x;
       curr.y += high*y;
    }
    cout << ans << "\n"; 


}
