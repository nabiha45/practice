#include <bits\stdc++.h> 



using namespace std;

int find(int b, int sum[], int low, int high) 
{   int mid, ans;  

    while (low <= high) 
    {
   
    mid = low+(high-low)/2;
    
    
    if(b <= sum[mid]) 
    {   
        ans = mid; 
       high = mid - 1;
    }
    else if (b > sum[mid])  
    {   
        low = mid+1; 
    }
    } 
    return ans; 
    
    
}
int main() 
{
    int n,m; 
    cin >> n;

    int a[n+1]; 
    int sum[n+1];
    int x=0; 

    int i; 
    for(i = 1; i <= n; i++) 
    {
        cin >> a[i];
    }
    cin >> m; 
    for(i = 1; i <= n; i++) 
    {
        x+= a[i];
        sum[i] = x; 
    }
    
    

    while(m--) 
    {
        int b; 
        cin >> b; 
    int k = find(b, sum, 1, n);

    cout << k << "\n";
    }

}