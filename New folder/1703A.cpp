#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t; 
    cin >> t; 
    
    getchar();
    while (t--) 
    {   int c = 0;
        string s1; 

        int i; 
        getline(cin, s1);
          if (s1[0] == 'Y' || s1[0] == 'y') 
            {
                c++;
            }
             if (s1[1] == 'E' || s1[1] == 'e') 
            {
                c++;
            }
             if (s1[2] =='S' || s1[2]== 's') 
            {
                c++;
            }
        
        if (c == 3) cout << "YES\n";
        else cout << "NO\n";
    }
}