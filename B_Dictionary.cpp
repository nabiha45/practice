#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    int t;
    cin >> t; 
    while(t--) 
    {
        string str; 
        int c = 0;
        cin >> str; 
        int f = 0;
        for(int i = 0; i < 26; i++) 
        {
            for(int j = 0; j < 26; j++) 
            {   if(i != j) c++; 
                if(char(i + 97) == str[0] && char(j+97) == str[1]) 
                {   
                    f = 1;
                    break;
                }
            }
            if(f==1)break;
        }
        cout << c << endl; 
    }
}