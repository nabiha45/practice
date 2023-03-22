#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n;
    getline(cin, s);
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        n++;
    }
    cout << s[0] << n-1 << s[n-1];
}
