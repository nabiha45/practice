#include <bits/stdc++.h> 

using namespace std;
int main() 
{
    int t; 
    cin >> t; 
    while(t--) 
    {
        int n, a, b; 
        cin >> n >> a >> b;
        
        string str = "abcdefghijklmnopqrstuvwxyz"; 
        string str2;  
       for(int i = 0 ; i < n ; i ++){
        cout<<char((i % b) + 97) ;
    }
       cout << "\n";
    }

    

}