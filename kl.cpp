#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f1[26] = {0};
    int f2[26] = {0};
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string p;
        string h;
        getline(cin, p);

        getline(cin, h);
        int i, j;
        for (i = 0; p[i] != '\0'; i++)
        {
            f1[p[i] - 'a']++;
        }
        for (i = 0; h[i] != '\0'; i++)
        {
            f2[h[i] - 'a']++;
        }

        int flag = 1;
        for (i = 0; i < 26; i++)
        {
            if (f1[i] <= f2[i])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }

        }
        if (flag == 1) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }
}
