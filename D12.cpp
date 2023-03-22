#include <bits/stdc++.h> 

using namespace std;

int main() 
{
    string a;
    getline(cin, a); 
    int j1, j2;

     
    int i, j;
    for (i = 0; a[i] != '\0'; i++) 
    {
        if (a[i] == 'A') 
        {   j1 = i;
            for (j = i+1; a[j] != '\0'; j++) 
            {
                if (a[j] == 'Z') 
                {
                    j2 = i;
                }
            } 
            break;
        }
    }
    string s3; 
    s3 = a.substr(j1, j2);

    int l = s3.length();
    cout << l;
}