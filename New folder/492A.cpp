#include <bits\stdc++.h> 

using namespace std;

int main() 
{
    int n; 
    cin >> n; 
    int c = 0;
    int a1; 
    int i, sum = 0; 
    for (i = 1; i <=n; i++) 
    {
        a1 = i*(i+1) / 2;
        sum+= a1; 
        if (sum <= n) 
        {
            c++;
        }
        if (sum >= n) 
        {
            break;
        }
    }
    cout << c;
}