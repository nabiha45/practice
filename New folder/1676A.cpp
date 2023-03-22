#include <bits\stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    getchar();

    while (t--) 
    {
        int sum1 = 0;
        int sum2 = 0; 

        string s1;
        getline(cin, s1);

        int i;
        for (i= 0; i < 3; i++) 
        {
            sum1+= s1[i] -'0'; 
        }
        for (i = 3; i < 6; i++) 
        {
            sum2+= s1[i] - '0';
        }
        if (sum1==sum2) 
        {
            cout << "YES\n";
        }
        else 
        {
            cout << "NO\n";
        }
    }
}