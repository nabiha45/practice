#include <bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main() 
{
    int n, k;
    cin >> n >> k; 

    string s1;
    getchar();
    getline(cin, s1); 

    int i, c;
    c = 0; 
    if (n > 1 && k != 0) 
    {
    for (i = 0; i < n; i++) 
    {       
            if (i == 0 && s1[i] != '1' && c != k) 
            {
                s1[i] = '1'; 
                c++;
            }
            else if (s1[i] != '0' && c != k && i != 0)
            {
                s1[i] = '0';
                c++;
            }
        }
    }
    else if (n == 1 && k != 0) 
    {
        s1[0] = '0';
    }
    cout << s1;
}

