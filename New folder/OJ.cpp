#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    int t; 
    cin >> t;

    getchar();

    string a; 
    string b; 
    int count = 0;
    getline(cin, a);
    getline(cin, b); 

    int i; 
    for (i = 0; a[i] != '\0'; i++)
    {
        if(a[i] != ' ') 
        {
            a[count++] = a[i];
        }
        a[count] = '\0';
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        if(b[i] != ' ') 
        {
            b[count++] = b[i];
        }
        b[count] = '\0';
    } 
    cout << count; 
    cout << a; 
    cout << b;
    


}


