#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    string s; 
    getline(cin, s);

    int i; 
    int flag = 0;
    if(s[0] >= 'a' && s[0] <= 'z')
    {
        flag = 1;
    }
     if(s[0] >= 'A' && s[0] <= 'Z')
    {
        flag = 2;
    }
    for(i = 1; s[i] != '\0'; i++) 
    {
        
        if((s[0] >= 'a' && s[0] <= 'z')&& (s[i] >= 'A' && s[i] <= 'Z')) 
        {
            flag = 1;
        }
        
        else if((s[0] >= 'A' && s[0] <= 'Z')&& (s[i] >= 'A' && s[i] <= 'Z'))
        {
            flag = 2;
        }
        else 
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1) 
    {
        if(s[0] >= 'a' && s[0] <= 'z') 
    {
        s[0] = s[0] - 32; 
    }
    for(i = 1; s[i] != '\0'; i++) 
    {
        
        if(s[i] >= 'A' && s[i] <= 'Z') 
        {
            s[i] = s[i] + 32;
        }
    }
    }
    else if (flag == 2) 
    {
        for(i = 0; s[i] != '\0'; i++) 
        {
            s[i] = s[i] + 32;
        }
    }
    for(i = 0; s[i] != '\0'; i++) 
    {
        cout << s[i];
    }

}