#include <bits\stdc++.h> 

using namespace std; 
int main() 
{
    int t; 
    cin >> t; 
    cin.ignore(); 

    while (t--)
    {
    string str;
    getline(cin, str); 

    if (str[0] == 'c' || str[0] == 'o' || str[0] == 'd' || str[0] == 'e' || str[0] == 'f' || str[0] == 'r' || str[0] == 's' )
    {
      cout << "YES\n";  
    }
    else 
    {
        cout << "NO\n";
    }
    }
    
    
}