#include <bits/stdc++.h> 

using namespace std; 
int linear_search (int arr[], int n, int x) 
{
    int i; 
    for(i = 0; i < n; i++) 
    {
        if(arr[i] == x) 
        {
            return i;
        }
    }
    return -1; 
}

int main() 
{
    int n; 
    cin >> n; 
    int arr[n]; 
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int x; 
    cin >> x; 
    int m = linear_search(arr, n, x);
    cout << m << endl;
}