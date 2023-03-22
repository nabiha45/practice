#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    long long int n, m, i, j;
    cin >> n >> m;
    int arr[10000][100000];
    int k = 1; 

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            arr[i][j] = k;
            k++;
        }
    }
     for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
           cout << arr[i][j];
        }
    }
}