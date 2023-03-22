#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int t; 
    cin >> t;
    

    while (t--) 
    {
        int n, i;
        int T = 0; 
        int I = 0; 
        int M = 0; 
        int U = 0; 
        int R = 0; 
        cin >> n;
        getchar();
        string s1; 
        getline(cin, s1);
        for (i = 0; s1[i] != '\0'; i++) 
        {
            if (s1[i] == 'T')
            {
                T++;
            }
            else if (s1[i] == 'i')
            {
                I++;
            }
            else if(s1[i] == 'm') 
            {
                M++;
            }
            else if (s1[i] == 'u') 
            {
                U++;
            }
            else if (s1[i] == 'r') 
            {
                R++;
            }
            else 
            {   
                T = 0;
                break;
            }

        }
        int sum = T + I + M + U + R; 
        if (sum == 5) 
        {
            cout << "YES\n";
        }
        else 
        {
            cout << "NO\n";
        }
        
    }
return 0; 
}