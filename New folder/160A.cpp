#include <bits\stdc++.h> 

using namespace std;

int main() 
{
    int n, i; 
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int sum = 0; 
    int c = 0;
    for (i = 0; i < n; i++) 
    {
        sum+= arr[i];
    }
    sort (arr, arr+n, greater<int>());  
    int sum2;  
    for (i = 0; i < n; i++) 
    {
        sum2+= arr[i]; 
        c++;
        if (sum2 > (sum-sum2)) 
        {
            break;
        }
    }
    cout << c;



}
