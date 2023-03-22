#include <bits/stdc++.h>

using namespace std;

int main() 
{   
    int n; 
    int ans = 0;
    cin >> n; 
    while (n--) 
    {
    string shape; 
    cin >> shape; 
    if (shape[0] == 'I') 
    {
        ans += 20; 
    }
    else if (shape[0] == 'C') 
    {
        ans += 6; 
    }
    else if (shape[0] == 'T') 
    {
        ans += 4;
    }
    else if (shape[0] == 'O') 
    {
        ans += 8;
    }
    else if (shape[0] == 'D') 
    {
        ans += 12;
    }
    }
    cout << ans;

    
}
