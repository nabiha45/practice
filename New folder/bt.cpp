#include <bits/stdc++.h> 


using namespace std;
int main() 
{
    int n, k;
    cin >> n >> k;
    getchar();

    string s; 
    getline(cin, s);
    string a;

    int i;
    int j = k; 

    for(i = 0; s[i] != '\0'; i++) 
    {
        if(s[i] == 'o' && j != 0) 
        {
            a[i] = 'o';
            j--;
        }
        else 
        {
            a[i] = 'x';
        }
        

    }
    for(i = 0; a[i] != '\0'; i++) 
    {
        cout << a[i];
    }




}