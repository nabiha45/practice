#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string s; 
    s = {"qwertyuiopasdfghjkl;zxcvbnm,./"};

    int i,j; 
    string a;
    string b; 
    getline(cin, b); 
    getline(cin, a);
    int l = a.length();
    
    string x;
    for(i = 0; a[i] != '\0'; i++) 
    {
        for(j = 0; s[j] != '\0'; j++) 
        {
        if(b[0] == 'R') 
        {
         if(a[i] == s[j]) 
         {
            x[i] = s[j-1];
         }   
        }

        else if (b[0] == 'L') 
        {
            if(a[i] == s[j]) 
            {
                x[i] = s[j+1];
            }
        }
        }
    }
    x[l-1] = '\0';
    for(i = 0; x[i] != '\0'; i++) 
    {
        cout << x[i];
    }
}