#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int n;
    cin >> n;
    long long int i;
    long long int sum = 0;
    for (i = 1; i <= n*n; i++)
    {
        sum += i;
    }

    cout << sum/n;
}
