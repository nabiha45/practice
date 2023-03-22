#include <bits/stdc++.h> 
using namespace std;

int main() 

{
    int n; 

    cin >> n; 
    int a[n]; 
    int i;
    for(i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    sort(a, a+n); 
    for(i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    int *ptr = lower_bound(a, a+n, 5);
    cout << (*ptr) << endl;


}