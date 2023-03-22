#include <bits\stdc++.h> 

using namespace std;

int main() 
{
    int t;
    cin >> t; 

    while (t--) 
    {
    int n, a, b; 
    cin >> n >> a >> b;
    
    getchar();

    string str; 
    int i; 
    getline(cin, str);

    sort(str.begin(), str.end());
    int sum = 0;

    if (n == b && a < 0) 
    {
        sum = 1*a - b; 
        cout << sum*n;
    } 
    else 
    {   int k = 0;
        for (i = 0; i < n; i++) 
        {
            if (str[i] == '1') 
            {
                k = i;
            }
        }

        cout << k; 
    }
    }

    
}