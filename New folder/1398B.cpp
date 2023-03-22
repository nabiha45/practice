#include <bits/stdc++.h> 

using namespace std; 

int main() 
{
    string s; 
    int i;
    int arr[101] = {0};
    int t; 
    cin >> t;
    getchar(); 
    while(t--) 
    {   
        getline(cin, s);
        int j = 0;
        int l = s.size(); 
        int count = 0; 
        for(i = 0; s[i] != '\0'; i++) 
        {
            if(s[i] == '1') 
            {
                count++;
            }
            else if(s[i] == '0' && count > 0)
            {
                arr[j++] = count;
                count = 0;
            }
            if(i == l-1) 
            {
                if(count > 0) 
                {
                    arr[j++] = count; 
                    count = 0;
                }
            }

        }
        sort(arr, arr+j);
        int sum = 0;
        for(i = j-1; i >=0; i-=2) 
        {
            sum+= arr[i];
        }
        cout << sum << "\n"; 
        
    }
}