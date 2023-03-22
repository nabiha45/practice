#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    int x; 
    cin >> x; 
    getchar();
    int a = 0, b = 0;
    string s1; 
    getline(cin, s1); 
    int i; 
    for(i = 0; i < x; i++) 
    {
        if (s1[i] == 'z') 
        {
            a++;
        }
        if (s1[i] == 'n') 
        {
            b++;
        }
    }
    
    for (i = 0; i < b; i++) 
    {
        if (b > 0) 
        {
            cout << "1" << " ";
        }
    }
    for (i = 0; i < a; i++) 
    {
        if (a > 0) 
        {
            cout << "0" << " ";
        }
    }
    
}

