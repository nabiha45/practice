#include <bits\stdc++.h>

#define long long int
using namespace std;


int32_t main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string c;
    int ans = 0;

    for(i = 0; c[i] != 0; i++)
    {
        if(c[i] =='1')
        {
            ans+= a;
        }
        else if(c[i] == '2')
        {
            ans += b;
        }
        else if(c[i] == '3')
        {
            ans+= c;
        }
        else if(c[i] == '4')
        {
            ans += d;
        }
    }
    cout << ans;
}
