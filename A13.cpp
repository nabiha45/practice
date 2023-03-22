#include <bits/stdc++.h> 

using namespace std;

int main() 
{
    string s1;
    getline(cin, s1);
    int c = 1; 
    int w = 0;
    int i;
    for (i = 1; s1[i] != '\0'; i++)
    {
        if (s1[i] == s1[i-1]) 
        {
            c++;   
        }
        else 
        {
            w += (c+4)/5;
            c = 1;
        }
    }
    w += (c+4) / 5;

   
    cout << w;
}