#include <bits/stdc++.h>

using namespace std;

int find(int l, int r, int sum, char h[])
{
    sum = 0;
    int i;
        for (i = l-1; i < r; i++)
        {
            sum += h[i] -96;
        }
        cout << sum << "\n";

}


int main()
{
    int n, q;
    cin >> n >> q;

    string h;
    getchar();
    getline (cin, h);

    while (q--)
    {   int sum = 0;
    int l, r;
        cin >> l >> r;
        find(l, r, sum, h);

    }

}
