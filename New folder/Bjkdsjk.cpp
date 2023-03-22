#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, flag;
    flag = 1;
    cin >> n;
    int arr[100001];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a, b, j;
    for (i = 0; i < n; i++;)
    {
        a = arr[i];
        b = arr[i+1];
        for (j = 0; j < n; j++)
        {
            int c, d;
            if (i == j)
            {
                continue;
            }
            else
            {
                c = arr[j];
                d = arr[j+1];

                if (a == c || b == d)
                {
                    flag = 0;
                    break;
                }
                j++;
            }
           

        }
        i++;

    }
    if (flag == 0 || n == 2)
    {
        cout << "NO\n";

    }
    else
    {
        cout << "YES\n";
    }

}
