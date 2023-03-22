#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a1;
    string a2;

    getline(cin, a1);
    getline(cin, a2);
    reverse(a1.begin(), a1.end());

    for (int i = 0; a1[i] != '\0'; i++) 
    {
        if (a1[i] == a2[i]) 
        {
            flag = 1;
        }
        else 
        {
            flag = 0;
            break;
        }
    } 
    if (flag == 1) 
    {
        cout << YES;

    }
    else 
    {
        cout << NO;
    }

}