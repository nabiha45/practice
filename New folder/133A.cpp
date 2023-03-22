#include <bits\stdc++.h> 

using namespace std; 

int main() 
{
    string c; 
    int i; 
    getline(cin, c); 
    int flag = 0; 

    for(i = 0; c[i] != '\0'; i++) 
    {
        if(c[i] == 'H' || c[i] == 'Q' || c[i] == '9') 
        {
            flag = 1; 
            break;
        }
    }
    if(flag == 1) cout << "YES";
    else if (flag == 0)cout << "NO";
}