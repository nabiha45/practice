#include <bits/stdc++.h>

#define long long int

 using namespace std;
int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int c = 0;
        int n;
        cin >> n;
        if(n % 7 == 0)
        {
            cout << n << "\n";
        }
        else
        {
            if (n % 7 > 3)
            {
                while(n% 7 != 0)
                {
                    n++;
                    if(n % 7 == 0)
                {
                    cout << n << "\n";
                    break;
                }
                }
            }
            else
            {
                while(n%7 != 0)
                {
                    n--;

                if(n % 7 == 0)
                {
                    cout << n << "\n";
                    break;
                }
                }

        }
        }

}
}
