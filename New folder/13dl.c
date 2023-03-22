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

    int i, c, d, k;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            c++;
        }
        if (str1[i] == '1' && str2[i] == '0')
        {
            d = i;
        }
        if (str1[i] == '0' && str2[i] == '1')
        {
            k = i;
        }

    }
    int diff;
    diff = k-d;
    if (diff < 0) diff = -1*diff;

    if (diff < c) cout << c;
    else if (c < diff) cout << diff;
    return 0;

}
