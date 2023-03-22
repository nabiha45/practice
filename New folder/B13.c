#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m
    cin >> n >> m;

    int a[m];
    int i;
    for (i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int a2[n];
    for (i = 0; i < n; i++)
    {
        a[i] = a2[i];
    }
    int j = 0;
    int c = 0;
    for (i = 0; i < n; i++)
    {
        for (j = n; j < m; j++)
        {
            if (a[i] == a2[j])
            {
                c++;
                break;
            }
        }
    }
    cout << c;
}
