#include <bits/stdc++.h> 
 #define int long long 

 using namespace std; 

 int32_t main() 
 {
    int n, m; 
    char c; 
    cin >> n >> m >> c;  
    getchar();
    char ss[n][m];

    for(int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> ss[i][j];
        }
    }
    int freq[26] = {0};
    /* for(int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cout << ss[i][j];
        }
        cout << "\n"; 
    } */

   /*  vector <string> ss; 

    for(int i = 0; i < n; i++) 
    {
        string s;
        cin >> s;
        ss.push_back(s); 
    } */

     /* for(int i = 0; i < n; i++) 
    {
        cout << ss[i] << "\n";
    }  */
    int count = 0;
    for(int i = 0; i < n; i++) 
 
    {
        for (int j = 0; j < m; j++) 
        {
            if(ss[i][j] == c) 
            {
                if(ss[i][j+1] != c && ss[i][j+1] != '.' && freq[ss[i][j+1] -'A'] == 0 && j+1 != m) // right
                {
                    count++;
                    freq[ss[i][j+1] -'A']++;
                    }
                 if(ss[i+1][j] != c && ss[i+1][j] != '.' && freq[ss[i+1][j] -'A'] == 0 && i+1 != n ) //up
                {
                    count++;
                    freq[ss[i+1][j] -'A']++;
                }
                if(ss[i][j-1] != c && ss[i][j-1] != '.' && freq[ss[i][j-1] -'A'] == 0  && j-1 >= 0) //left
                {
                    count++;
                    freq[ss[i][j-1] -'A']++;
                }
             if(ss[i-1][j] != c && ss[i-1][j] != '.' && freq[ss[i-1][j] -'A'] == 0 && i-1 >=0) //down
                {
                    count++;
                    freq[ss[i-1][j] -'A']++;
                }
 
            }
            
 
        }
    }
    cout << count; 

 }
