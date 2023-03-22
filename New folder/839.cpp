#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    int n, k; 
    cin >> n >> k; 
    int arr[n];
    int i; 
    for (i = 0; i < n; i++) 
    {
        cin >> arr[i]; 
    }

    int sum = 0; 
    for(i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    if (sum >= k && n != 1 && k/n <= 8) 
    {
        cout << n;
    }
    else 
    {
        cout << "-1";
    }

}