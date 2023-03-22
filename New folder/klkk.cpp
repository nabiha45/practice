#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s1;
        getline(cin, s1);

        string s2;
        int i, j = 0;
        for (i = 0; s1[i] != '\0'; i++)
        {
            if(i % 2 == 1 || i == 0)
            {
            s2[++j] = s1[i];
            cout << s2[j];


            }
        }
        cout << "\n";


    }
}

