#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int k = 1;
    cin >> t;
    cin.ignore();

    while (t--)
    {

    string a;
    string b;
    int count = 0;
    getline(cin, a);
    getline(cin, b);

    a.erase(remove(a.begin(), a.end(), ' '), a.end());
    b.erase(remove(b.begin(), b.end(), ' '), b.end());
    int i;
    for (i = 0; i < a.size(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] +32;
        }

    }
    for (i = 0; i < b.size(); i++)
    {

        if (b[i] >= 'A' && b[i] <= 'Z')
        {
            b[i] = b[i] + 32;
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            count++;
        }

    }

    if (count == a.size())
    {
        printf("Case %d: Yes\n", k);
        k++;
    }
    else
    {
        printf("Case %d: No\n", k);
        k++;
    }



    }


}
