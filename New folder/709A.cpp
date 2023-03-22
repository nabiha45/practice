#include <bits/stdc++.h>

using namespace std;

int main() 
{
  long long int n, b, d, c = 0; 
cin >> n >> b >> d;
   int arr[n]; 

   long long int i; 
   for (i = 0; i < n; i++) 
   {
    cin >> arr[i];
   }
   long long int sum= 0; 
   for (i = 0; i < n; i++) 
   {
    if (arr[i] <= b) 
    {
        sum+= arr[i];
    }
    if (sum > d) 
    {
        c++; 
        sum = 0;
    }
   }
    cout << c;
   
}

