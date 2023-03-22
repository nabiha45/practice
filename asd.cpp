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
        if (a1[i] != '1' || a1[i] !=  '2' || a1[i] != '3')
        {
            cout << "+";
        }
        else
        {
            cout << a1[i];
        }
    }


}
