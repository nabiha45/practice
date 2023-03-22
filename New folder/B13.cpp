#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int a[m];
    int i;
    for (i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int a2[n];
    if (n < m)
    {
    for (i = 0; i < n; i++)
    {
        a2[i] = a[i];
    }
    int j = 0;
    int c = 0, w = 0;
    for (i = 0; i < n; i++)
    {
        for (j = n; j < m; j++)
        {
            if (a[i] == a[j])
            {
                c++;
                a[j] = 0;

               
                break;
            }
        }

    }

    if (c >= n)
    {
     w = c/n;

    }
    cout << w+1;
    }
    else
    {
        cout << "0";
    }
}
