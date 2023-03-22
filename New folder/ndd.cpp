#include <bits/stdc++.h>

#define long long int
using namespace std;


int32_t main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    getchar();
    string str;
    getline(cin, str);
    int ans = 0;
    int i;

    for(i = 0; str[i] != 0; i++)
    {
        if(str[i] =='1')
        {
            ans+= a;
        }
        else if(str[i] == '2')
        {
            ans += b;
        }
        else if(str[i] == '3')
        {
            ans+= c;
        }
        else if(str[i] == '4')
        {
            ans += d;
        }
    }
    cout << ans;
}
