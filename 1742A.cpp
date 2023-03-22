#include <bits/stdc++.h> 

using namespace std;

int main() 
{
    int t; 
    scanf("%d", &t);

    while (t--) 
    {
        int a, b, c; 
        scanf("%d %d %d", &a, &b, &c); 

        int sum = 0;
        if (a+b == c || b + c == a || a + c == b) 
        {
            cout << "YES\n";
        }
        else 
        {
            cout << "NO\n";
        }
        

    }
}