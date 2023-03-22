#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    getline(cin, str);
    int i = 0;

    if (str[0] >= 'a' && str[i] <= 'z')
        {
            str[0] = str[0] - 32;
        }
    for (i= 1; str[i] != '\0'; i++)
    {

        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

    }

    cout << str;
}
