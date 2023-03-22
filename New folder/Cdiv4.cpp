#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int t; 
    cin >> t; 
    getchar();
    while(t--) 
    {
        int n; 
        cin >> n;
        getchar();
        string str; 
        getline(cin, str); 
        int i;
        int c = n; 
        int j = n-1;
        for (i = 0; i < n/2; i++) 
        {
            if((str[i] == '1' && str[j] == '0') || (str[i] == '0' && str[j] == '1'))
            {
                c = c-2;
                j--; 
            }
            else 
            {
                break;
            }
        }
        cout << c << "\n";
    }
}