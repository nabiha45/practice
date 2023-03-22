#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    string c; 
    getline(cin, c);
  

    int i, j, k; 
    int min = 999;
    
    for(i = 0; c[i] != '\0'; i++) 
    {
        if(c[i] =='h') 
        {
            j = i;
            if(j < min) min = j; 
        }
        else if(c[i] == 'o') 
        {
            k = i; 
            
        }
    }
    int count = 0;
    string str = {"hello"};
    for(i = 0; str[i] != '\0'; i++) 
    {   
        for(int m = min; m <= k; m++) 
        {
            if(str[i] == c[m]) 
            {
                count++;
                c[m] = 'x';
                break; 
            }
            else 
            {
               c[m] = 'x';
            }
        }
    }
    if(count == 5) 
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
  /*  for(i = j; i <= k; i++) 
    {
        cout << c[i];
    } */
    
}