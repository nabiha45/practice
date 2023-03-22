#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i;
    arr a[1001];

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int a1 = 0;
    int b= 0;

    for (i = 0; i < n-1; i++)
    {
        int k = gcd(a[i], a[i+1]);

        if (i % 2 == 0)
        {

        if (a[i] % k == 0 && a[i+1] % k == 0)
        {
            a1++;
        }
        else
        {
            break;
        }
        }
        else if(i % 2 == 1)
        {
            if (b[i] % k == 0 && b[i+1] % k == 0)
            {
                b++;
            }
            else
            {
                break;
            }
        }
    }
    if (a1 > b)
    {
        cout << "Alice";
    }
    else
    {
        cout << "Bob";
    }
}
