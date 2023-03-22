#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int t; 
    cin >> t; 
    while (t--) 
    {
       long long int n, k, c= -1; 
        cin >> n >> k; 
        while (n != 0) 
        {
            c = c+(n%k);
            c++;
            n /= k; 
        }
        cout << c << "\n"; 
    }
}