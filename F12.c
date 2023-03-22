#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a1;
    getline(cin, a1);
    for (int i = 0; a1[i] != '\0'; i++)
    {
        if (a1[i] != '+')
        {
            sort(a1.begin(), a1.end());
        }
    }
    for (int i = 0; i < a1.size(); i++)
    {
        if (a1[i] = '1')
        {
            cout << "1+";
        }
        else if (a[i] == '2')
        {
            cout << "2+";
        }
        else if (a[i] == '3')
        {
            cout << "3";
        }
    }



}
