#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();
    string str1;
    string str2;

    getline(cin, str1);
    getline(cin, str2);

    int i;
    int c = 0, d = 0, k = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            c++;
            // cout << c << "\n";
        }


    }
    int diff1 = 0;
    for (i = 0; str1[i] != '\0';i++)
    {
         if (str1[i] == '1' && str2[i] == '0')
        {
            d = i+1;
           // cout << d << "\n";
        }
        else if (str1[i] == '0' && str2[i] == '1')
        {
            k = i+1;
           // cout << k << "\n";
        }
        if (d > 0 && k > 0)
        {
            diff1+= (k-d);
            d = 0;
            k = 0;
        }
    }

    if (diff1 < 0)
    {
        diff1 = -1*diff1;
    }

    if (diff1 < c)
    {
        cout << diff1;
    }
    else if (c < diff1)
    {
        cout << c;
    }
    else if (c == diff1)
    {
        cout << c;
    }

    return 0;

}
