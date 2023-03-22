
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v;
    int freq[5]= {0};
    int i;
    for(i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        freq[x]++;
    }
    sort(v.begin(), v.end());
    int sum = 0;
    int c = 0;
    c += freq[4];
    


    cout << c;
}