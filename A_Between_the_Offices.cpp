#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    int n; 
    cin >> n; 
    getchar();
    string str; 
    getline(cin, str);

    if (str[0] == 'S' && str[n-1] == 'F') 
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
}