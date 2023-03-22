#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    int n, k; 
    cin >> n >> k; 

    string s; 
    getchar();
    getline(cin, s);

    int i; 
    if (n != k) 
    {
        for (i = 1; i <= k; i++) 
        {
            if (i % 2 == 0) 
            {
                cout << ")";
            }
            else 
            {
                cout << "(";
            }
        }
    }
    else if (n == k) 
    {
        cout << s; 
    }
}