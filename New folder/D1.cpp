#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int l = str.length();
    int i, j;
    int a, b;
    a = 0;
    b = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            a++;
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            b++;
        }
    }
    if (a > b)
    {
        for (i = 0; i < l; i++)
        {   if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] +32;
        }
    }
    else if (a < b)
    {
        for (i = 0; i < l; i++)
        {   if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        }
    }
    else if (a == b)
    {
        for (i = 0; i < l; i++)
        {   if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] +32;
        }
    }
    cout << str;
    return 0;


}
