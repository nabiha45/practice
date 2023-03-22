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
        if (str1[i] != str2[i] && str1[i+1] == str2[i+1])
        {
            c++;

        }


    }
    for (i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] != str2[i] && str1[i+1] != str2[i+1])
        {
           c++;
        }
    }
    cout >> c;

    return 0;

}
